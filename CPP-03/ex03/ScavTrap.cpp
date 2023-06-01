/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 08:18:20 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 09:38:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :  ClapTrap() {
    SCAVETRAP_INIT();
}

ScavTrap::ScavTrap(std::string name) :  ClapTrap(name){
    SCAVETRAP_INIT();
    std::cout<<"->Calling ScavTrap name constructor "<<this<<std::endl;
}
ScavTrap::ScavTrap(ScavTrap const& cp) : ClapTrap() {
    
    this->hitPoints = cp.getHP();
    this->energyPoints = cp.getEP();
    this->attackDmg = cp.getDMG();
    this->name = cp.getName();
    std::cout<<"->Calling ScavTrap copy constructor "<<this<<std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &cp){
    std::cout<<"->Calling ScavTrap Atribute copy constructor "<<this<<std::endl;
    if(this != &cp)
    {
        this->hitPoints = cp.getHP();
        this->energyPoints = cp.getEP();
        this->attackDmg = cp.getDMG();
        this->name = cp.getName();
    }
    return *this;
}

void ScavTrap::attack(const std::string& target){
    if(isAlive != true){
        std::cout<<"Cant do anything "<<name<<" stopped working"<<std::endl;
        return;
    }    
    std::cout<<"SCAVTRAP "<<name<<" attacks "<<target<<", causing "<<attackDmg<<" points of damage"<<std::endl;
    energyPoints -= 1;
    this->setDead();
}

void ScavTrap::getGuardkeep(){
    if(isAlive != true){
        std::cout<<"Cant do anything "<<name<<" stopped working"<<std::endl;
        return;
    }    
    if(guardKeep)
        std::cout<<name<<" enters in GuardGate mode"<<std::endl;
    else
        std::cout<<name<<" left GuardGate mode"<<std::endl;
}
void ScavTrap::guardGate(){
    guardKeep = !guardKeep;
    this->getGuardkeep();
}

ScavTrap::~ScavTrap(){
    std::cout<<name<< " ScavTrap has been destructed <- "<<this<<std::endl;
}

int ScavTrap::scavTrap_EP(){ return 50; }