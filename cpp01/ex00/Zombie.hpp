#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <stdlib.h>
# include <string>
# include <iostream>

class Zombie {
	std::string name;

	public:
	void announce( void );
	Zombie( std::string name );
	~Zombie ( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
