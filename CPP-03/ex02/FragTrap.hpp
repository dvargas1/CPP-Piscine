/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:19:21 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 09:50:58 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include "ClapTrap.hpp"

#define FRAGTRAP_INIT() \
  this->isAlive = true, \
  this->hitPoints = 100, \
  this->energyPoints = 100, \
  this->attackDmg = 30

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const& cp);
    FragTrap &operator=(FragTrap const &cp);
    ~FragTrap();
    void highFivesGuys(void); 
};

#endif