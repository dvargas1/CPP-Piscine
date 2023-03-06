/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:41:01 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 11:51:52 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

Harl::Harl(){
	automate[0] = &Harl::debug;
	automate[1] = &Harl::info;
	automate[2] = &Harl::warning;
	automate[3] = &Harl::error;
}
Harl::~Harl(){}

void Harl::complain(std::string level){
	int i = atoi(level.c_str());
	Func a = automate[i];
	Harl h;
	(h.*a)();
}

void Harl::debug(void){
	std::cout<<"debug msg"<<std::endl;
}
void Harl::info(void){
	std::cout<<"info msg"<<std::endl;

}
void Harl::warning(void){
	std::cout<<"warning msg"<<std::endl;

}
void Harl::error(void){
	std::cout<<"error msg"<<std::endl;

}
