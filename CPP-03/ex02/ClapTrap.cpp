/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:18:24 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 09:37:58 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :  CLAPTRAP_INIT(){}

ClapTrap::ClapTrap(std::string name) :  CLAPTRAP_INIT(),
                                        name(name){
    std::cout<<"->Calling ClapTrap name constructor "<<this<<std::endl;
}
ClapTrap::ClapTrap(ClapTrap const& cp): hitPoints(cp.getHP()),
                                        energyPoints(cp.getEP()),
                                        attackDmg(cp.getDMG()),
                                        name(cp.getName()){
    std::cout<<"->Calling ClapTrap copy constructor "<<this<<std::endl;
}
ClapTrap& ClapTrap::operator=(ClapTrap const &cp){
    std::cout<<"->Calling ClapTrap Atribute copy constructor "<<this<<std::endl;
    if(this != &cp)
    {
        this->hitPoints = cp.getHP();
        this->energyPoints = cp.getEP();
        this->attackDmg = cp.getDMG();
        this->name = cp.getName();
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if(isAlive != true){
        std::cout<<"Cant do anything "<<name<<" stopped working"<<std::endl;
        return;
    }
    std::cout<<"claptrap "<<name<<" attacks "<<target<<", causing "<<attackDmg<<" points of damage"<<std::endl;
    energyPoints -= 1;
    this->setDead();
}

void ClapTrap::takeDamage(unsigned int amount){
    if(isAlive != true){
        std::cout<<"Cant do anything "<<name<<" stopped working"<<std::endl;
        return;
    }
    std::cout<<name<<" takes "<<amount<<" points of dmg "<<std::endl;
    hitPoints -= amount;
    energyPoints -= 1;
    this->printStatus();
}

void ClapTrap::beRepaired(unsigned int amount){
    if(isAlive != true){
        std::cout<<"Cant do anything  "<<name<<" stopped working"<<std::endl;
        return;
    }
    std::cout<<name<<" healed "<<amount<<" points of dmg "<<std::endl;
    hitPoints += amount;
    energyPoints -= 1;
    this->printStatus();
}

int ClapTrap::getEP()const { return energyPoints; }
std::string ClapTrap::getName()const { return name; }
int ClapTrap::getDMG()const { return attackDmg; }
int ClapTrap::getHP()const { return hitPoints; }
void ClapTrap::setDead(){ 
    if (hitPoints <= 0 || energyPoints <= 0)
        isAlive = false; 
}

void ClapTrap::printStatus(){
    this->setDead();
    if (isAlive != true)
        std::cout<<name<<" stopped working, hes dead !"<<std::endl;
    else
        std::cout<<name<<" has "<<hitPoints<<" hp points and "<<energyPoints<<" EP, he can still fight"<< std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<<name<< " ClapTrap has been destructed <- "<<this<<std::endl;
}