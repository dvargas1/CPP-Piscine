#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
public:
	Weapon(void);
	Weapon(std::string);
	~Weapon(void);
	std::string GetType(void);
	void SetType(std::string);

private:
	std::string Type;
};
#endif
