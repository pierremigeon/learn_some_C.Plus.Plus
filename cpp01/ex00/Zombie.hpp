#include <stdlib.h>
#include <string>
#include <iostream>

class Zombie {
	std::string name;

	void announce( void );
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
};
