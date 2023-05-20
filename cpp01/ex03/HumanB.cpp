#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB (const std::string name) {
	HumanB::name = name;
}

void	HumanB::attack() {
	if (!HumanB::w_type)
		return;
	std::cout << HumanB::name << "attacks with their" << HumanB::w_type->getType();
}

void	HumanB::setWeapon(Weapon w_type) {
	if (HumanB::w_type)
		delete HumanB::w_type;
	HumanB::w_type = &w_type;
}
