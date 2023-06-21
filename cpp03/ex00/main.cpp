
#include "ClapTrap.hpp"

int	main() {
	ClapTrap A("Franklin");
	ClapTrap B = A;
	ClapTrap C(A);
	
	std::cout << "Basic setup hey!?! ..." << std::endl;

	return (0);
}
