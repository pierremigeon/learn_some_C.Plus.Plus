#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB {
	std::string 	name;
	Weapon 		*weapon;

	public:
	HumanB (std::string name);
	void 	attack();
	void	setWeapon(Weapon &w_type);
};

#endif
