/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 07:20:03 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 07:55:31 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(){
    DIAMONDTRAP_INIT();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
                                                ScavTrap(name + "_scav_name"),
                                                FragTrap(name + "_frag_name"),
                                                name(name + "_frag_name"){
    DIAMONDTRAP_INIT();
}

DiamondTrap::DiamondTrap(DiamondTrap const &cp) : ClapTrap(), ScavTrap(), FragTrap(){
    std::cout<<"->Calling DiamondTrap copy constructor "<<this<<std::endl;
    this->hitPoints = cp.getHP();
    this->energyPoints = cp.getEP();
    this->attackDmg = cp.getDMG();
    this->name = cp.getName();
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &cp){
    std::cout<<"->Calling DiamondTrap Atribute copy constructor "<<this<<std::endl;
    if(this != &cp)
    {
        this->hitPoints = cp.getHP();
        this->energyPoints = cp.getEP();
        this->attackDmg = cp.getDMG();
        this->name = cp.getName();
    }
    return(*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout<<name<< " DiamondTrap has been destructed <- "<<this<<std::endl;
}