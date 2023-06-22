#include "ClapTrap.hpp"
#include "Node.hpp"

int	main() {
	ClapTrap A("Franklin");
	ClapTrap B = A;
	ClapTrap C(A);
	
	std::cout << "Basic setup hey!?! ..." << std::endl;

	Node::printNode();


	return (0);
}
