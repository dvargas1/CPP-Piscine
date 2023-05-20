/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:18:36 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:18:37 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

int main(void){

	Weapon weapon1("teste");
	Weapon weapon2("Canivete");
	HumanA a("Daniel",weapon1);
	HumanB b("Marvin");


	std::cout<<"----- TESTE HUMANO A -----"<<std::endl;
	a.Attack();
	weapon1.SetType("Katana");
	a.Attack();
	weapon1.SetType("AK-42");
	a.Attack();

	std::cout<<"\n\n----- TESTE HUMANO B -----"<<std::endl;
	b.Attack();
	b.SetWeapon(weapon2);
	b.Attack();
	weapon2.SetType("Espada Longa");
	b.Attack();
	weapon2.SetType("");
	b.Attack();

	std::cout<<"\n------- FIM ------"<<std::endl;
	return(0);
}

/*
int main(void){
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.Attack();
		club.SetType("some other type of club");
		bob.Attack();
	}{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.SetWeapon(club);
		jim.Attack();
		club.SetType("some other type of club");
		jim.Attack();
	}
}
*/