/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:44:30 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/16 07:57:17 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void ft_help();

int main(int argc, char **argv) {
    if(argc < 2)
        ft_help();
    try
    {
        std::string input = argv[1];
        RPN rpn(input);

        std::cout << rpn.getResult() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
     } 
}

void ft_help() {
    std::cout << "Usage: this function will resolve a Reverse Polish Notation passed in argv\n";
    std::cout << "Example ./PmergeMe 8 9 * 9 - 9 - 9 - 4 - 1 + \n";
    std::cout << "We only accept numbers from 0 to 9 and the operandos + - * /" << std::endl;
}

/*
    Example of RPN
    9 2 + 7 3 - * = 44
    8 3 * 4 + 7 - = 21  
    9 5 - 2 4 * + = 12
*/