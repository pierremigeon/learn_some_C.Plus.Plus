#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string _name ) : name(_name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	if ( _name == "Tree Head" )
		return ;
	if ( name_exists( _name ) )
		this->name = number_name( _name );
	Node::addTreeMember(*this);
}

ScavTrap::ScavTrap( const ClapTrap &_ct ) {
	operator=(_ct);
}

void	ScavTrap::operator=( const ScavTrap &_ct ) {
	this->name = _ct.name;
	this->hitPoints = _ct.get_HP();
	this->energyPoints = _ct.get_EP();
	this->attackDamage = _ct.get_AD();
	if ( name_exists( _ct.name ) )
		this->name = number_name( _ct.name );
	Node::addTreeMember(*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " has been retired... destructor called." << std::endl;
}


void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in gatekeeper mode" << std::endl;
}
