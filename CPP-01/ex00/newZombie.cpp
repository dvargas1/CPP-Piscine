#include "zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* a = new Zombie(name);
	std::cout<<"The monster named "<< name<< " emerge on the HEAP"<<std::endl;
	return(a);
}
