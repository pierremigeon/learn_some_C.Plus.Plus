#include <iostream>

int	main(int ac, char **argv) {
		
	*argv[0] = 'a';
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < ac; i++) {
		std::cout << argv[i] << (char)('\n' - 10 * (i < ac - 1));
	}
	return (0);
}
