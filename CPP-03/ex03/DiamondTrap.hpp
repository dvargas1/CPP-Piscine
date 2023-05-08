/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:10:58 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 08:02:48 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS
#define DIAMONDTRAP_CLASS

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define DIAMONDTRAP_INIT() \
this->isAlive = true, \
this->hitPoints = FragTrap::hitPoints, \
this->energyPoints = ScavTrap::energyPoints, \
this->attackDmg = FragTrap::attackDmg

class DiamondTrap: public ScavTrap, public FragTrap{
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &cp);
    DiamondTrap &operator=(DiamondTrap const &cp);
    ~DiamondTrap();
    void WhoAmI();      
private:
    std::string name;
};

#endif