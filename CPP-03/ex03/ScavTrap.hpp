/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:52:27 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 07:38:35 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include "ClapTrap.hpp"

#define SCAVETRAP_INIT() \
  this->isAlive = true, \
  this->hitPoints = 100, \
  this->energyPoints = 50, \
  this->guardKeep = false, \
  this->attackDmg = 20

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& cp);
    ScavTrap &operator=(ScavTrap const &cp);
    ~ScavTrap();
    void getGuardkeep();
    void guardGate();
    void attack(const std::string& target);
    static int scavTrap_EP();
protected:
    bool guardKeep;
};



#endif