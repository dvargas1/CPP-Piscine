/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:04:37 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/02 14:29:48 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed{
public:
    Fixed();
    Fixed(int const nb);
    Fixed(float const nb);
    Fixed(Fixed const &src);
    Fixed &operator=(const Fixed &src);
    ~Fixed();
    int getRawBits(void) const;
    bool operator>(const Fixed &src) const;
    bool operator>=(const Fixed &src) const;
    bool operator<(const Fixed &src) const;
    bool operator<=(const Fixed &src) const;
    bool operator==(const Fixed &src) const;
    bool operator!=(const Fixed &src) const;
    Fixed operator*(const Fixed &srd) const;
    Fixed operator/(const Fixed &srd) const;
    Fixed operator+(const Fixed &srd) const;
    Fixed operator-(const Fixed &srd) const;
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator--(int);
    Fixed operator++(int);
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
private:
    int fixedPoint;
    static const int fracbits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fix);


#endif