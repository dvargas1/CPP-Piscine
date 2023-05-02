/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:04:00 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/01 08:21:04 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    std::cout<<"\n";
    Fixed b( a );
    std::cout<<"\n";
    Fixed c;
    std::cout<<"\n";
    c = b;
    std::cout<<"\n";
    std::cout<<"value of A = " << a.getRawBits() << std::endl;
    std::cout<<"value of B = " << b.getRawBits() << std::endl;
    std::cout<<"value of C = " << c.getRawBits() << std::endl;
    return 0;
}