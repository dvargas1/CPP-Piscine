/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:03:54 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 10:06:20 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCAT") {
    std::cout<< "Calling Wrongcat default constructor my name is: "<<this<<std::endl;
}

WrongCat::~WrongCat() {
    std::cout<< "Calling Wrongcat default destructor my name is: "<<this<<std::endl;
}

WrongCat::WrongCat(const WrongCat& cp) : WrongAnimal(cp.getType()) {
  std::cout<< "Calling Wrongcat copy constructor my name is: "<<this<<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& cp) {
  std::cout<< "Calling Wrongcat assign constructor my name is: "<<this<<std::endl;
  if (this != &cp) {
    type = cp.getType();
  }
  return *this;
}

void WrongCat::makeSound() const {
  std::cout<<"Meow !"<<std::endl;
}