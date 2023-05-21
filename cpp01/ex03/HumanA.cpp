#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA (const std::string name, Weapon &w_type) {
	this->name = &name;
	this->w_type = &w_type;
}

void	HumanA::attack() {
	std::cout << *this->name << " attacks with their " << this->w_type->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &w_type) {
	this->w_type = &w_type;
}
