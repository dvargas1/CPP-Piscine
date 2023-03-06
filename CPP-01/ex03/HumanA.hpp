/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:18:47 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:19:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>
class HumanA{
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void Attack(void);

private:
	Weapon& wp;
	std::string name;
};
#endif
