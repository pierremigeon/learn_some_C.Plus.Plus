#include <stdlib.h>
#include <string>
#include <iostream>

class HumanB {
	std::string &name;
	Weapon *w_type;

	public:
	HumanB (const std::string name);
	void 	attack();
	void	setWeapon(Weapon w_type);
};
