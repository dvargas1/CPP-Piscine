/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:04:41 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 10:04:45 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout<<"Calling default WrongAnimal constructor, my name is: "<<this<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type){  
  std::cout<<"Calling default type WrongAnimal constructor, my name is: "<<this<<std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout<<"Calling default WrongAnimal destructor, my name is: "<<this<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cp) : type(cp.getType()) {
  std::cout<<"Calling WrongAnimal copy constructor, my name is: "<<this<<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& cp) {
  std::cout<< "Calling Wronganimal assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    this->type = cp.getType();
  }
  return *this;
}

std::string WrongAnimal::getType() const {return(type);}

void WrongAnimal::makeSound() const{
  std::cout<<"Maybe i make some sound"<<std::endl;
}