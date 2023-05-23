#include "Zombie.hpp"

void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie (std::string name) {
	Zombie::name = name;
}

Zombie::~Zombie () {
	std::cout << name << " is no more!!!\n";
}
