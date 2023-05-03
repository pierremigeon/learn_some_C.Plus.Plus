#include <iostream>
#include <stdlib.h>
#include "phonebook.h"
using namespace std;

int	main() {
	string input ("Start");
	char to_int[3];
	Phonebook book;

	while (input.compare("EXIT") != 0) {
		cout << "Please enter command: ADD/SEARCH/EXIT\n";
		getline(cin, input);
		if (!input.compare("ADD")) {
			cout << "you're adding\n";
		}
		while (!input.compare("SEARCH") && to_int[0] != 'q') {
			cout << "Please enter the desired index to view or q to exit search mode:\n";
			cin.get(to_int, 3);
			book.show_entry(atoi(to_int));
		}
	}
	return (0);
}
