#ifndef WEAPON_H
# define WEAPON_H
# include <stdlib.h>
# include <string>
# include <iostream>

class Weapon {
	std::string *type;

	public:
	Weapon(std::string type);
	const std::string &getType();
	void setType (std::string w_type);
};

#endif
