#include "Zombie.hpp"

Zombie::Zombie() : Name("") {}
Zombie::Zombie(std::string name) : Name(name) {}
Zombie::~Zombie()
{
	std::cout<< Name << " aaaaaa is going down"<< std::endl;
}

void Zombie::announce()
{
	std::cout<< Name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
	return;
}
