/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:44:30 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/13 21:46:59 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    (void) argc;
    std::string input = argv[1];

    RPN rpn(input);

    std::cout << rpn.getResult() << std::endl;
}