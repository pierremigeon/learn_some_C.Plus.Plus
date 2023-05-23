#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <stdlib.h>
# include <string>
# include <iostream>

class Zombie {
	std::string name;

	public:
	Zombie *next;
	void announce( void );
	Zombie (std::string name);
	~Zombie ();
};

Zombie* 	newZombie( std::string name );
void 		randomChump( std::string name );
Zombie*    	zombieHorde( int N, std::string name );

#endif
