/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:10:11 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 11:42:23 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("CAT") {
    std::cout<< "Calling cat default constructor my name is: "<<this<<std::endl;
    brain = new Brain();
}

Cat::~Cat() {
    std::cout<< "Calling cat default destructor my name is: "<<this<<std::endl;
    delete brain;
}

Cat::Cat(const Cat& cp) : Animal(cp.getType()) {
  std::cout<< "Calling cat copy constructor my name is: "<<this<<std::endl;
  brain = new Brain();
  brain->setIndex(cp.brain->getIndex());
  brain->copyIdeas(*cp.brain, cp.brain->getIndex());
}

Cat &Cat::operator=(const Cat& cp) {
  std::cout<< "Calling cat assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    type = cp.getType();
    brain->setIndex(cp.brain->getIndex());
    brain->copyIdeas(*cp.brain, cp.brain->getIndex());
  }
  return *this;
}

Brain * Cat::getBrain() const{return brain;}

void Cat::makeSound() const {
  std::cout<<"Meow !"<<std::endl;
}
