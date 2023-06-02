/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:10:16 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/01 09:16:24 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    
    if(argc != 2)
        return 1;

    ScalarConverter converter;
    try
    {
        converter.convert(argv[1]);
    }
    catch (...)
    {
        std::cerr << "Something is wrong with input" << std::endl;
    }
}