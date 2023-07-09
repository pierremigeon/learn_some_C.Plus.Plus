#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string _name ) : ClapTrap(_name + "_clap_name") {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = _name;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond trap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << " and " << this->ClapTrap::get_name() << std::endl;
}

void	DiamondTrap::attack( const std::string &type ) {
	this->ScavTrap::attack(type);
}
