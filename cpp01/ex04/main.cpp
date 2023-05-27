#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>

int	main(int ac, char **argv) {
	std::ifstream		i_file;
	std::ofstream		o_file (std::string(argv[1]) + std::string(".replace"));
	std::stringstream 	strStream;
	size_t 			size;
	std::string 		s1 = argv[2];
	std::string 		s2 = argv[3];

	if (ac < 3) {
		std::cout << "Usage: ./sed_is_for_losers filename s1 s2\n";
		return (0);
	}
	i_file.open(argv[1]);
	strStream << i_file.rdbuf();	
	std::string str = strStream.str();
	if (s1.compare(s2)) {
		while ((size = str.find(s1)) != std::string::npos) {
			str.erase(size, s1.length());
			str.insert(size, s2);
		}
	}
	o_file << str; 
	o_file.close();
	i_file.close();
	return (0);
}
