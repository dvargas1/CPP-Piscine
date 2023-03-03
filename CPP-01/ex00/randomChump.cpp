#include "zombie.hpp"

void randomChump(std::string name)
{
	Zombie b = Zombie(name);
	std::cout<<"Hello from the stack, my name is -> ";
	b.announce();
}
