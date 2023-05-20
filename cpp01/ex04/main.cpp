
#include <fstream>
#include <iostream>

int	main(int ac, char **argv) {
	if (ac < 3) {
		std::cout << "Usage: ./sed_is_for_losers filename s1 s2\n";
	}
	ofstream infile;
	infile.open(argv[1]);
	while (getline()) {
		
	}
	infile.close();
	return (0);
}
