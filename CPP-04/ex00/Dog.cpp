/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:04:15 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 09:42:44 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("DOG") {
    std::cout<< "Calling dog default constructor my name is: "<<this<<std::endl;
}

Dog::~Dog() {
  std::cout<< "Calling dog destructor my name is: "<<this<<std::endl;
}

Dog::Dog(const Dog& cp) : Animal(cp.getType()) {
    std::cout<< "Calling dog copy constructor my name is: "<<this<<std::endl;
}

Dog &Dog::operator=(const Dog& cp) {
  std::cout<< "Calling dog assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    type = cp.getType();
  }
  return *this;
}

void Dog::makeSound() const {
  std::cout<<"BARK WOOF WOOF !!!"<<std::endl;
}
