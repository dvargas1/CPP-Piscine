#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void){
	int horde_size = 5;
	Zombie* a;
	a = zombieHorde(horde_size, "Zombies");
	for(int i = 0; i < horde_size; i++){
		a[i].announce();
	}
	delete[] a;
	return(0);
}
