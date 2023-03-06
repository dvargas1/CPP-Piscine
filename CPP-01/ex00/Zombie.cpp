/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:17:06 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:17:15 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : Name(name) {}
Zombie::~Zombie()
{
	std::cout<< Name << " is going down"<< std::endl;
}

void Zombie::announce()
{
	std::cout<< Name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
