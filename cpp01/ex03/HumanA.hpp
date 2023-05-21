#include <stdlib.h>
#include <string>
#include <iostream>

class HumanA {
	const std::string 	*name;
	Weapon 			*w_type;

	public:
	HumanA (const std::string name, Weapon &w_type);
	void 		attack();
	void		setWeapon(Weapon &w_type);
};
