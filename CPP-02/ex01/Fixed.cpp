/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:04:39 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/01 21:42:32 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPoint(0){
    std::cout<<"default constructor create: "<<this<<std::endl;
}
Fixed::Fixed(const Fixed &src):
                                fixedPoint(src.getRawBits()){
    std::cout<<"copy constructor create: "<<this<<std::endl;
}

Fixed::Fixed(int const nb): fixedPoint(nb << fracbits){
    std::cout<<"integer constructor create:  "<<this<<std::endl;
}

Fixed::Fixed(float const nb): fixedPoint(roundf(nb * (1<<fracbits))){
    std::cout<<"float constructor create: "<<this<<std::endl;
}
Fixed &Fixed::operator=(const Fixed &src){
    std::cout<<"copy assignment operator create: "<<this<<std::endl;
    if(this != &src)
        fixedPoint = src.getRawBits();
    return *this;
}
std::ostream &operator<<(std::ostream &stream, Fixed const &fix){ 
    stream<<fix.toFloat(); 
    return stream;
    }
float Fixed::toFloat(void)const { return static_cast<float>(fixedPoint) / ( 1 << fracbits ); }
int Fixed::toInt(void)const { return fixedPoint >> fracbits;}
void Fixed::setRawBits(int raw){fixedPoint = raw;}
int Fixed::getRawBits(void) const{return fixedPoint;}


Fixed::~Fixed(){ std::cout<<"Calling destructor"<<std::endl; }