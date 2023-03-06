/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:37:38 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 11:54:20 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

void HelpMenu(){
	std::cout<<"Hello from Harl, i'm your computer"<<std::endl;
	std::cout<<"Today we will test all my levels of processing"<<std::endl;
	std::cout<<"Harl have 4 levels, DEBUG, INFO, WARNING, ERROR"<<std::endl;
	std::cout<<"please i'm old so use only caps with me"<<std::endl;
}

int main(void){
	Harl Computer;
	std::string str;
	HelpMenu();
	getline(std::cin, str);
	Computer.complain(str);
	return(0);
}
