#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB (std::string name) : name(name) {
	return ;
}

void	HumanB::attack() {
	if (!this->weapon)
		return;
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w_type) {
	this->weapon = &w_type;
}
