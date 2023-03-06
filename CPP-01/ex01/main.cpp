/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:17:43 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:17:45 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <stdlib.h>


Zombie* zombieHorde(int N, std::string name);

void StartInstructions(void){
	std::cout<< "Hello Necromancer, lord of Darkness"<<std::endl;
	std::cout<< "Today we can summon a horde of Zombies to attack 42RioCampus"<<std::endl;
}

int HordeQuantity(void){
	std::string str;
	int i = 0;
	std::cout<< "Please choose a number of zombies to summon"<<std::endl;
	std::getline(std::cin, str);
	i = atoi(str.c_str());
	if(i < 1)
		return(-1);
	return(i);
}

std::string HordeName(void){
	std::string str;
	std::cout<<"Now we need to Name our Horde, please do the Honor"<<std::endl;
	std::getline(std::cin, str);
	if(str.empty())
		return("NULL");
	return(str);
}

int main(void){
	StartInstructions();
	int hordeSize = HordeQuantity();
	if(hordeSize == -1)
		return(std::cout<<"Houston we have a problem", -1);
	std::string hordeName = HordeName();
	if(hordeName == "NULL")
		return(std::cout<<"Houston we have a problem", -1);
	std::cout<<"\nRISE FROM YOUR GRAVE !!!!!"<<std::endl;
	Zombie* a;
	a = zombieHorde(hordeSize, hordeName);
	std::cout<<"\nTELL ME WHAT YOU SEEK MY HORDE"<<std::endl;
	for(int i = 0; i < hordeSize; i++){
		a[i].announce();
	}
	std::cout<<"\nYour need has been satisfied, time to rest"<<std::endl;
	delete[] a;
	return(0);
}
