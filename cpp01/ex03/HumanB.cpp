#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB (const std::string name) {
	this->name = &name;
}

void	HumanB::attack() {
	if (!this->w_type)
		return;
	std::cout << *this->name << " attacks with their " << this->w_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w_type) {
	this->w_type = &w_type;
}
