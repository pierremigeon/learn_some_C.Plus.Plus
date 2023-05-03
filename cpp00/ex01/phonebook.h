
#include <iomanip> 
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
		unsigned size = s.size();

		s.resize(10);
		if (size > 10) {
			s.back() = '.';
		}
		return s;
	}

	void display_entry(int x) {
		cout << "|     index|first name|last name| nick name|\n";
		cout << string(45, '_');
		cout << setw(10);
		cout << "|" << x << "|" << trunc(first_name) << "|" \
			<< trunc(last_name) << "|" << trunc(nickname) << "|";
		cout << string(45, '_');
	};

	//void update_create_entry() {
	//	
	//}
};

class PhoneBook {
private:
	Contact list[8];
	int 	current_index;

	list[0]->first_name = "Pierre";

public:
	void show_entry(int x) {
		if (x > 8 || x < 0) {
			cout << "Index out of range\n";
			return;
		}
		Contact entry = list[x];
		entry.display_entry(x);
	};

	//void new_entry() {
			
	//};
};

}
