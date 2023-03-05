#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string wpname){
	this->Type = wpname;
}
Weapon::~Weapon(){}

std::string Weapon::GetType(){
	return(this->Type);
}

void Weapon::SetType(std::string type){
	this->Type = type;
}
