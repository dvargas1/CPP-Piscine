#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	void announce (void);
private:
	std::string Name;
};

#endif
