/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:16:38 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:17:14 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void){
	std::cout<<"Creating a zombie named Runner"<<std::endl;
	Zombie	First = Zombie("Runner");
	First.announce();

	std::cout<<"Creating a zombie named Bloater"<<std::endl;
	Zombie*	Second = newZombie("Bloater");
	Second->announce();

	randomChump("Clicker");

	delete Second;
	return(0);
}
