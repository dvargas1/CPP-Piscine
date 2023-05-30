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
this->hitPoints = FragTrap::fragTrap_HP(), \
this->energyPoints = ScavTrap::scavTrap_EP(), \
this->attackDmg = FragTrap::fragTrap_AD()

class DiamondTrap: public virtual FragTrap, public virtual ScavTrap{
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &cp);
    DiamondTrap &operator=(DiamondTrap const &cp);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI();
    void printStatus();      
private:
    std::string name;
};

#endif