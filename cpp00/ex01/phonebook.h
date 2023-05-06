#include <iomanip>
#include <sstream>
#include <stdlib.h>
using namespace std;

namespace phonebook {

class Contact {
	public:
	
	string first_name;
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;

	string  trunc(string s) {
		unsigned size = s.length();

		if (size >= 10) {
			s.resize(10);
			if (size > 10)
				s.back() = '.';
		}
		return s;
	}

	void display_entry(int x) {

		cout << string(4*11 + 1, '#') << '\n';
		cout << "|     index|first name| last name| nick name|\n";
		cout << string(4*11 + 1, '#') << '\n';
		cout << "|" << setw(10) << x << "|" 
			<< setw(10) << trunc(first_name) << "|" 
			<< setw(10) << trunc(last_name) << "|" 
			<< setw(10) << trunc(nickname) << "|" << '\n';
		cout << string(4*11 + 1, '#') << '\n';
		cout << string(4*11 + 1, '#') << '\n';
	};
};

class PhoneBook {
	Contact list[8];
	int 	current_index;

	public:
	PhoneBook() {current_index = -1;}

	void show_entry(int x) {
		if (x >= 8 || x < 0) {
			cout << "Index out of range\n";
			return;
		}
		Contact entry = list[x];
		entry.display_entry(x);
	};

	void new_entry() {
		if (current_index < 7) {++current_index;}
		cin.ignore();
		cout << "Please enter first name:\n";
		getline(cin, list[current_index].first_name);
		cout << "Please enter last name:\n";
		getline(cin, list[current_index].last_name);
		cout << "Please enter nick name:\n";
		getline(cin, list[current_index].nickname);
		cout << "Please enter phone number:\n";
		getline(cin, list[current_index].phone_number);
		cout << "Please enter darkest secret:\n";
		getline(cin, list[current_index].darkest_secret);
	};
};

}
