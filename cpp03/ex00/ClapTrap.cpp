#include "ClapTrap.hpp"
#include "Node.hpp"

ClapTrap::ClapTrap( const std::string _name ) : name(_name) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &_ct ) {
	operator=(_ct);
}

void	ClapTrap::operator=( const ClapTrap &_ct ) {
	this->name = _ct.name;
	this->hitPoints = _ct.get_HP();
	this->energyPoints = _ct.get_EP();
	this->attackDamage = _ct.get_AD();
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " has been retired... desctructor called." << std::endl;
}

unsigned int	ClapTrap::get_HP() const {
	return ( this->hitPoints );
}

unsigned int	ClapTrap::get_EP() const {
	return ( this->energyPoints );
}

unsigned int	ClapTrap::get_AD() const {
	return ( this->attackDamage );
}

std::string	ClapTrap::get_name() const {
	return ( this->name );
}

void ClapTrap::attack(const std::string& target) {
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << ", lost " << amount << " energy points from the damage of the attack!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " regained " << amount << " energy points by being repaired" << std::endl;
}
