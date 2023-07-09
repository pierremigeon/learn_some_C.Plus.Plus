#include "FragTrap.hpp"

FragTrap::FragTrap( void ) { 
	std::cout << "Fragtrap constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string _name) : ClapTrap( _name, 100, 100, 30) {
	std::cout << "FragTrap " << _name << " initialized" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->get_name() << " has been retired... destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->get_name() << " is now high-fiving, so freaking tight and awesome" << std::endl;
}
