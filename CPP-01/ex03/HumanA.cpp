/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:18:41 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:19:09 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp) : wp(wp){
	this->name = name;
	this->wp = wp;
}

HumanA::~HumanA(){};

void HumanA::Attack(void){
	std::cout<<this->name<<" attacks with their "<<this->wp.GetType()<<std::endl;
}
