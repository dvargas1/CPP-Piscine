#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->Name = name;
}

HumanB::~HumanB(){}

void HumanB::SetWeapon(Weapon& newweapon){
	if(newweapon.GetType().empty())
		this->wp = NULL;
	else
		this->wp = &newweapon;
}

void HumanB::Attack(void){
	if(!this->wp || this->wp->GetType() == "")
		std::cout <<Name<<" dont have weapon to attack"<<std::endl;
	else
		std::cout<< Name<<" attacks with their "<<wp->GetType()<<std::endl;
}
