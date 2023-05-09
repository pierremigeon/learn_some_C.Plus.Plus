#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie newZombie = Zombie(name);
	return newZombie;
}
