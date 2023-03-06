/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:18:51 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:19:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->Name = name;
}

HumanB::~HumanB(){}

void HumanB::SetWeapon(Weapon& newweapon){
	if(newweapon.GetType().empty())
		this->wp = NULL;
	else
		this->wp = &newweapon;
}

void HumanB::Attack(void){
	if(!this->wp || this->wp->GetType() == "")
		std::cout <<Name<<" dont have weapon to attack"<<std::endl;
	else
		std::cout<< Name<<" attacks with their "<<wp->GetType()<<std::endl;
}
