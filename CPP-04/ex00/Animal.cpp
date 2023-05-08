/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:37:19 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 09:34:15 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
  std::cout<<"Calling default Animal constructor, my name is: "<<this<<std::endl;
}

Animal::Animal(std::string type): type(type){  
  std::cout<<"Calling default type Animal constructor, my name is: "<<this<<std::endl;
}

Animal::~Animal() {
  std::cout<<"Calling default Animal destructor, my name is: "<<this<<std::endl;
}

Animal::Animal(const Animal& cp) : type(cp.getType()) {
  std::cout<<"Calling Animal copy constructor, my name is: "<<this<<std::endl;
}

Animal &Animal::operator=(const Animal& cp) {
  std::cout<< "Calling animal assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    this->type = cp.getType();
  }
  return *this;
}

std::string Animal::getType() const {return(type);}

void Animal::makeSound() const{
  std::cout<<"Maybe i make some sound"<<std::endl;
}