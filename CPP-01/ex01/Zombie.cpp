#include "Zombie.hpp"

Zombie::Zombie() : Name("") {}
Zombie::Zombie(std::string name) : Name(name) {
	std::cout<<"constructor running"<<std::endl;
}
Zombie::~Zombie()
{
	std::cout<< Name << " is going down"<< std::endl;
}

void Zombie::SetName(std::string name){
	this->Name = name;
}

void Zombie::announce(){
	std::cout<< Name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
	return;
}
