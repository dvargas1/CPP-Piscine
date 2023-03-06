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
	Zombie*	First = newZombie("Runner");
	Zombie*	Second = newZombie("Bloater");

	randomChump("Clicker");

	First->announce();
	Second->announce();
	delete First;
	delete Second;
	return(0);
}
