#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
	Zombie *head = NULL;
	Zombie *temp = NULL;

	head = Zombie(name);
	temp = head;
	for (int i = 1; i < N; ++i) {
		temp->next = Zombie(name);
		temp = temp->next;
	}
	return head;
}
