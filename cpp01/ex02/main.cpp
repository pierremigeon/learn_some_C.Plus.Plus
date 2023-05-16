#include <stdlib.h>
#include <string>
#include <iostream>

int	main() {
	std::string example ("HI THIS IS BRAIN");
	std::string *stringPTR = &example;
	std::string &stringREF = example;

	//Print the address of the string, the address of the pointer, and the address of the reference
	std::cout << &example << "\n";
	std::cout << &stringPTR << "\n"; 
	std::cout << &stringREF << "\n";

	//Print the value of string, value of pointer, and value of the reference
	std::cout << example << "\n";
	std::cout << *stringPTR << "\n"; 
	std::cout << stringREF << "\n";
	



	return (0);
}
