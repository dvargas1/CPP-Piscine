#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp) : wp(wp){
	this->name = name;
	this->wp = wp;
}

HumanA::~HumanA(){};

void HumanA::Attack(void){
	std::cout<<this->name<<" attacks with their "<<this->wp.GetType()<<std::endl;
}
