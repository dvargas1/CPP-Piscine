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

Harl::Harl(){
	automate[0] = &Harl::debug;
	automate[1] = &Harl::info;
	automate[2] = &Harl::warning;
	automate[3] = &Harl::error;
}
Harl::~Harl(){}

void Harl::complain(std::string level){
	std::string PossibleLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -42;
	for(int i = 0; i < 4; i++){
		if(PossibleLevels[i] == level)
			index = i;
	}
	if(index < 0){
		std::cout<< "DEU RUIM, CORRE QUE O HARL TA PUTO !"<< std::endl;
		return;
	}
	Func a = automate[index];
	(this->*a)();
}

void Harl::debug(void){
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void Harl::info(void){
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void Harl::warning(void){
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void Harl::error(void){
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}
