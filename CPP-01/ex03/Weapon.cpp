/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:19:00 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:19:06 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : Type("teste"){}
Weapon::Weapon(std::string wpname){
	this->Type = wpname;
}
Weapon::~Weapon(){}

std::string Weapon::GetType() const{
	return(this->Type);
}

void Weapon::SetType(std::string type){
	this->Type = type;
}
