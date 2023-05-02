#include <iostream>
using namespace std;

int	main() {
	string input ("Start");

	while (input.compare("EXIT") != 0) {
		cout << "Please enter command: ADD/SEARCH/EXIT\n";
		getline(cin, input);
		if (!input.compare("ADD")) {
			cout << "you're adding\n";
		}
		if (!input.compare("SEARCH")) {
			cout << "you're searching\n";
		}
	}
	return (0);
}
