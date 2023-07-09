#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap default initialized" << std::endl;
}

ScavTrap::ScavTrap( const std::string _name) : ClapTrap( _name, 100, 50, 20) {
	std::cout << "ScavTrap " << _name << " initialized" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->get_name() << " has been retired... destructor called." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->get_name() << " is now in gatekeeper mode" << std::endl;
}
