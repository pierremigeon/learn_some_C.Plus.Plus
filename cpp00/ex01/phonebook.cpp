#include <iostream>
#include <cstdlib>
#include "phonebook.h"
using namespace std;
using namespace phonebook;

int	main() {
	string input ("Start");
	string to_int;
	PhoneBook book;

	book.list[0].first_name = "Pierre";
	book.list[0].last_name = "Migeon";
	book.list[0].nickname = "PierreMonetchiemonger";
	book.list[0].phone_number = "123456789101112";
	book.list[0].darkest_secret = "Is the secret pope";

	while (input.compare("EXIT") != 0) {
		to_int.clear();
		cout << "Please enter command: ADD/SEARCH/EXIT\n";
		cin >> input;
		if (!input.compare("ADD")) {
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
