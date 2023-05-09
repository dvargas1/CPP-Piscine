/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:04:15 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 11:41:54 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("DOG") {
    std::cout<< "Calling dog default constructor my name is: "<<this<<std::endl;
    brain = new Brain();
}

Dog::~Dog() {
  std::cout<< "Calling dog destructor my name is: "<<this<<std::endl;
  delete brain;
}

Dog::Dog(const Dog& cp) : Animal(cp.getType()) {
    std::cout<< "Calling dog copy constructor my name is: "<<this<<std::endl;
    brain = new Brain();
    brain->setIndex(cp.brain->getIndex());
    brain->copyIdeas(*cp.brain, cp.brain->getIndex());
}

Dog &Dog::operator=(const Dog& cp) {
  std::cout<< "Calling dog assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    type = cp.getType();
    brain->copyIdeas(*cp.brain, cp.brain->getIndex());
  }
  return *this;
}

Brain * Dog::getBrain() const{return brain;}

void Dog::makeSound() const {
  std::cout<<"BARK WOOF WOOF !!!"<<std::endl;
}
