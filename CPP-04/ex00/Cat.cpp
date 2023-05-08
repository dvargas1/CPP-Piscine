/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:10:11 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 09:42:42 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("CAT") {
    std::cout<< "Calling cat default constructor my name is: "<<this<<std::endl;
}

Cat::~Cat() {
    std::cout<< "Calling cat default destructor my name is: "<<this<<std::endl;
}

Cat::Cat(const Cat& cp) : Animal(cp.getType()) {
  std::cout<< "Calling cat copy constructor my name is: "<<this<<std::endl;
}

Cat &Cat::operator=(const Cat& cp) {
  std::cout<< "Calling cat assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    type = cp.getType();
  }
  return *this;
}

void Cat::makeSound() const {
  std::cout<<"Meow !"<<std::endl;
}
