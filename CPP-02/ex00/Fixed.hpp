/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:04:37 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/01 08:18:48 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>

class Fixed{
public:
    Fixed();
    Fixed(Fixed const &src);
    Fixed &operator=(const Fixed &src);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
private:
    int fixedPoint;
    static const int fracbits = 8;
};

#endif