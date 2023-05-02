using namespace std;

namespace phonebook {
	class Contact {
		string first_name;
		string last_name;
		string phone_number;
		string darkest_secret;

		void display_entry() {

		};
	};

	class PhoneBook {
		private:
		Contact list[8];
		int 	current_index (0);

		public:
		void show_entry(int x) {
			Contact entry = list[x];
			entry.display_entry();
		};

		void new_entry() {
			
			
		};
	};
}
