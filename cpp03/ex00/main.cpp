#include "ClapTrap.hpp"
#include "Node.hpp"

int	main() {
	ClapTrap A("Franklin");
	ClapTrap B = A;
	ClapTrap C(A);
	ClapTrap D("James Dean");

	A.attack("James Dean");
	A.attack("John Lennon");

	return (0);
}
