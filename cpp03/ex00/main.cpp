#include "ClapTrap.hpp"
#include "Node.hpp"

int	main() {
	ClapTrap A("Franklin_turtle");
	ClapTrap B("Franklin_turtle0");
	ClapTrap C("Franklin_turtle");
	ClapTrap D("Franklin_turtle1");

	ClapTrap E(A);
	ClapTrap F = A;

	F.attack("Franklin_turtle2");


	return (0);
}
