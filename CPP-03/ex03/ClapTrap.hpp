/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:13:46 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 08:11:48 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS
#include <iostream>

#define CLAPTRAP_INIT() \
  isAlive(true), \
  hitPoints(10), \
  energyPoints(10), \
  attackDmg(0)

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const& cp);
    ClapTrap &operator=(ClapTrap const &cp);
    ~ClapTrap();
    void printStatus();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    int getHP() const;
    int getEP() const;
    int getDMG() const;
    void setDead();

protected:
    bool isAlive;
    int hitPoints;
    int energyPoints;
    int attackDmg;
    std::string name;
};

#endif