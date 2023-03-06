/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:18:55 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:19:07 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB{
public:
	HumanB(std::string);
	~HumanB();
	void Attack(void);
	void SetWeapon(Weapon&);

private:
	std::string Name;
	Weapon* wp;
};
#endif
