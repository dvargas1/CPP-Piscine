/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:04:39 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/01 08:40:47 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"default constructor create: "<<this<<std::endl;
    fixedPoint = 0;
};
Fixed::Fixed(const Fixed &src):
                                fixedPoint(src.getRawBits())
{
    std::cout<<"copy constructor create: "<<this<<std::endl;
}
Fixed &Fixed::operator=(const Fixed &src){
    std::cout<<"copy assignment operator create: "<<this<<std::endl;
    if(this != &src)
        fixedPoint = src.getRawBits()  + 10;
    return *this;
}
Fixed::~Fixed(){
    std::cout<<"Calling destructor"<<std::endl;
};

void Fixed::setRawBits(int raw){fixedPoint = raw;};
int Fixed::getRawBits(void) const{return fixedPoint;};