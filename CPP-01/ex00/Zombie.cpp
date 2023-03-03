#include "Zombie.hpp"

Zombie::Zombie(std::string name) : Name(name) {}
Zombie::~Zombie()
{
	std::cout<< Name << " is going down"<< std::endl;
}

void Zombie::announce()
{
	std::cout<< Name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
