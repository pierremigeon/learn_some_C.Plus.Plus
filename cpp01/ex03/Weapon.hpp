#ifndef WEAPON_H
# define WEAPON_H
# include <stdlib.h>
# include <string>
# include <iostream>

class Weapon {
	std::string const *type;

	public:
	Weapon(const std::string type);
	const std::string &getType();
	void setType (std::string type);
};

#endif
