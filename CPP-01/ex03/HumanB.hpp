#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB{
public:
	HumanB(std::string);
	~HumanB();
	void Attack(void);
	void SetWeapon(Weapon&);

private:
	std::string Name;
	Weapon* wp;
};
#endif
