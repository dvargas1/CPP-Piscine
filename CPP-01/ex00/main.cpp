#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void){
	Zombie*	First = newZombie("Runner");
	Zombie*	Second = newZombie("Bloater");

	randomChump("Clicker");

	First->announce();
	Second->announce();
	delete First;
	delete Second;
	return(0);
}
