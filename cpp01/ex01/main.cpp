#include "Zombie.hpp"

int	main() {
	Zombie *first;
	int num = 0;

	std::cin >> num;
	
	first = zombieHorde(num, "Pierre");
	while (first) {
		first->announce();
		first = first->next;
	}
	return (0);
}
