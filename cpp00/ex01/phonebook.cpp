#include <iostream>
#include <cstdlib>
#include "phonebook.h"
using namespace std;
using namespace phonebook;

void	make_upper(string *s) {
	for (unsigned long i = 0; i < s->size(); ++i)
		s[0][i] = s[0][i] & ~' ';
}

int	main() {
	string input ("Start");
	string to_int;
	PhoneBook book;

	while (input.compare("EXIT") != 0) {
		to_int.clear();
		cout << "Please enter command: ADD/SEARCH/EXIT\n";
		cin >> input;
		make_upper(&input);
		if (!input.compare("ADD")) {
			book.new_entry(0);
			cout << "you're adding\n";
		}
		while (!input.compare("SEARCH") && to_int[0] != 'q') {
			cout << "Please enter the desired index to view or q to exit search mode:\n";
			cin >> to_int;
			while(to_int.size() && isspace(to_int.front()))
				to_int.erase(to_int.begin());
			if (isdigit(to_int[0]) || (to_int[0] == '-' && isdigit(to_int[1])))
				book.show_entry(atoi(to_int.c_str()));
		}
	}
	return (0);
}
