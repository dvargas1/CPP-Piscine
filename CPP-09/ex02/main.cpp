/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:44:53 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/16 07:57:16 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void ft_help();

int main(int argc, char **argv) {
    if(argc < 2)
        ft_help();
    try
    {
        PmergeMe num(argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ft_help() {
    std::cout << "Usage: we need a positive integer sequence as argument\n";
    std::cout << "Example ./PmergeMe 7 5 2 1 3 0 9\n";
    std::cout << "This sequence will be sorted using Ford Johnson algotirhm \n";
    std::cout << "using two containers VECTOR and DEQUE" << std::endl;
}

// to run a lot of random and a lot of args
// ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
