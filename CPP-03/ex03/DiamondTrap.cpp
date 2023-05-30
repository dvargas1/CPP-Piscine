/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 07:20:03 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 08:06:16 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
    DIAMONDTRAP_INIT();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
                                                FragTrap(name + "_frag_name"),
                                                ScavTrap(name + "_scav_name"),
                                                name(name){
    DIAMONDTRAP_INIT();
}

DiamondTrap::DiamondTrap(DiamondTrap const &cp) : ClapTrap(), FragTrap(), ScavTrap(){
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

void DiamondTrap::attack(const std::string& target){
    FragTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout<<"Hello, my name is "<<name<<" and my ClapTrap name is "<<ClapTrap::name<<std::endl;
}

void DiamondTrap::printStatus(){
    std::cout << "\nmy name is" << name << std::endl;
    std::cout << "ENERGYPOINTS -> " << this->energyPoints <<std::endl;
    std::cout << "DAMAGE -> " << this->attackDmg <<std::endl;
    std::cout << "HIT POINTS -> " << this->hitPoints <<std::endl;
    std::cout << "\n\n";
}

DiamondTrap::~DiamondTrap(){
    std::cout<<name<< " DiamondTrap has been destructed <- "<<this<<std::endl;
}