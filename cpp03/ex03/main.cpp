#include "ClapTrap.hpp"
#include "Node.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {

	DiamondTrap *P = new DiamondTrap("Pierre");
	P->whoAmI();
	delete P;

/*
	ScavTrap A("Johnny Bravo");
	ClapTrap B("Peat Moss");
	ClapTrap C("Clara Thompson");
	FragTrap D("Paula Dean");

	A.attack("Peat Moss");
	A.guardGate();

	B.attack("Clara Thompson");
	C.beRepaired(1);
	A.attack("Peat Moss");
	B.attack("Clara Thompson");

	D.highFivesGuys();
*/

	return (0);
}
