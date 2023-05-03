

#include <iostream>
#include <iomanip>
using namespace std;


string	trunc(string s) {
	s.resize(2);
	if (s.size() == 2) {
		s.back() = '.';
	}
	return s;
}


int	main() {
	string words ("Hello");
	char to_int[3];

	cin.get(to_int, 3);

	cout << to_int << "\n";
	cout << atoi(to_int) << "\n";
	cout << words;
	cout << trunc(words);
	return (0);
}
