/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:31:49 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 09:37:44 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :  ClapTrap() {
    FRAGTRAP_INIT();
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name){
    FRAGTRAP_INIT();
    std::cout<<"->Calling FragTrap name constructor "<<this<<std::endl;
}
FragTrap::FragTrap(FragTrap const& cp) : ClapTrap() {
    
    this->hitPoints = cp.getHP();
    this->energyPoints = cp.getEP();
    this->attackDmg = cp.getDMG();
    this->name = cp.getName();
    std::cout<<"->Calling FragTrap copy constructor "<<this<<std::endl;
}
FragTrap& FragTrap::operator=(FragTrap const &cp){
    std::cout<<"->Calling FragTrap Atribute copy constructor "<<this<<std::endl;
    if(this != &cp)
    {
        this->hitPoints = cp.getHP();
        this->energyPoints = cp.getEP();
        this->attackDmg = cp.getDMG();
        this->name = cp.getName();
    }
    return *this;
}
FragTrap::~FragTrap(){
    std::cout<<name<< " FragTrap has been destructed <- "<<this<<std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout<<name<<"is waiting for a nice high five"<<std::endl;
}
