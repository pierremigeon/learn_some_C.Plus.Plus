#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA (const std::string name, Weapon &w_type) {
	HumanA::name = &name;
	HumanA::w_type = &w_type;
}

void	HumanA::attack() {
	std::cout << *HumanA::name << " attacks with their " << HumanA::w_type->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &w_type) {
	HumanA::w_type = &w_type;
}
