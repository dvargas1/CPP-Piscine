/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:20:05 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:10 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interface.hpp"

int main()
{
    Interface   Interface;
    PhoneBook   PhoneBook;
	std::string input;

    while (1)
    {
        std::cout <<"Enter a valid allcaps input please"<<std::endl;
        std::getline(std::cin, input);
        if(input == "EXIT")
            break;
        else if(input =="ADD")
            Interface.CreateContact(PhoneBook);
        else if(input == "SEARCH")
            Interface.PrintAllContact(PhoneBook);
        else
            std::cout <<"Invalid input" <<std::endl;
    }
    return 0;
}
