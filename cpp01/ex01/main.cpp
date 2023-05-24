#include "Zombie.hpp"

void	call_hoard(Zombie *first) {
	while (first) {
		first->announce();
		first = first->next;
	}
}

void	free_hoard(Zombie *first) {
	while (first) {
		delete first;
		first = first->next;
	}
}

int	main() {
	Zombie *first;
	int num = 0;

	std::cin >> num;
	first = zombieHorde(num, "Pierre");
	call_hoard(first);
	free_hoard(first);

	return (0);
}
