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

	//void update_create_entry() {
	//	
	//}
};

class PhoneBook {
	public:
	Contact list[8];
	//int 	current_index;

	void show_entry(int x) {
		if (x >= 8 || x < 0) {
			cout << "Index out of range\n";
			return;
		}
		Contact entry = list[0];
		entry.display_entry(x);
	};

	void new_entry(int index) {
		list[index].first_name = "Pierre";
		list[index].last_name = "Migeon";
		list[index].nickname = "PierreMonetchiemonger";
		list[index].phone_number = "123456789101112";
		list[index].darkest_secret = "Is the secret pope";
	};
};

}
