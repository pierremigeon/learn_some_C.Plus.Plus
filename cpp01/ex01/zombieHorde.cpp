#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
	Zombie *head = NULL;
	Zombie *temp = NULL;

	if (!N)
		return NULL;
	head = new Zombie(name);
	temp = head;
	for (int i = 1; i < N; ++i) {
		temp->next = new Zombie(name);
		temp = temp->next;
	}
	return head;
}
