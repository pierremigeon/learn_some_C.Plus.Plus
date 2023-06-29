#include "ClapTrap.hpp"
#include "Node.hpp"
#include "ScavTrap.hpp"

int	main() {
	ScavTrap A("Johnny Bravo");
	ClapTrap B("Peat Moss");
	ClapTrap C("Clara Thompson");

	A.attack("Peat Moss");
	A.guardGate();

	B.attack("Clara Thompson");
	C.beRepaired(1);
	A.attack("Peat Moss");
	B.attack("Clara Thompson");



	return (0);
}
