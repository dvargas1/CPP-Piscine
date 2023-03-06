/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:17:49 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:17:59 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : Name("") {}
Zombie::Zombie(std::string name) : Name(name) {
	std::cout<<"constructor running"<<std::endl;
}
Zombie::~Zombie()
{
	std::cout<< Name << " is going down"<< std::endl;
}

void Zombie::SetName(std::string name){
	this->Name = name;
}

void Zombie::announce(){
	std::cout<< Name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
	return;
}
