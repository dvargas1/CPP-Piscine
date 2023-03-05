#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>
class HumanA{
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void Attack(void);

private:
	Weapon& wp;
	std::string name;
};
#endif
