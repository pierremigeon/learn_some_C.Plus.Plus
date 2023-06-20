#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target.name << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->energyPoints -= amount;
	std::cout << "ClapTrap " << this->name << ", lost " << amount << " energy points from the damage of the attack!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->energyPoints += amount;
	std::cout << "ClapTrap " << this->name << " regained " << amount << " energy points by being repaired" << std::endl;
}
