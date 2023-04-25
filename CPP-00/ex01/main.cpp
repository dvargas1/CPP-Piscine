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
        std::cout <<"Type an input ->";
        std::getline(std::cin, input);
        if(input == "EXIT")
            break;
        else if(input =="ADD"){
            if(!Interface.CreateContact(PhoneBook)){
                std::cout<<"Error creating contact, try again"<<std::endl;
            }
        }
        else if(input == "SEARCH")
            Interface.PrintAllContact(PhoneBook);
        else
            std::cout <<"Please choose a valid input (ADD) (SEARCH) (EXIT)"<<std::endl;
    }
    return 0;
}
