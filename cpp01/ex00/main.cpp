
#include "Zombie.hpp"


int	main() {
	Zombie *new1 = newZombie("Pierre");
	Zombie *new2 = newZombie("Ralph");
	Zombie *new3 = newZombie("Sally");

	new1->announce();
	new2->announce();
	new3->announce();
	
	delete(new1);
	delete(new2);
	delete(new3);

	randomChump("Jenny");
	randomChump("Alice");
	randomChump("Sadie");

	return (0);
}
