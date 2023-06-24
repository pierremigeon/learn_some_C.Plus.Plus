#include "ClapTrap.hpp"
#include "Node.hpp"

std::string	number_name( std::string name ) {
	int i;
	for (i = 0; i < name.length(); i++)
		if (isdigit(name[i]))
			break;
	int num = atoi(&(name.substr(i, name.length())));
	return (name.substr(0, --i) + itoa(++num));
}

int		name_exists( std::string name ) {
	ClapTrap check = Node::findTreeMember(name);
	if ( name == "Tree Head" )
		return (0);
	if ( check.get_name() == name )
		return (1);
	return (0);
}

ClapTrap::ClapTrap( const std::string _name ) : name(_name) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	if ( name_exists( name ) )
		this->name = number_name( name );
	if (_name != "Tree Head")
		Node::addTreeMember(*this);
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

int		attackErrorMessage( const std::string name, const std::string target ) {
	std::cout << "ClapTrap " << name << " cannot attack " << target <<\
		 " because " << target << " does not exist!!!" << std::endl;
	return (1);
}

void		attackSuccessMessage( const std::string name, const std::string target, const unsigned int damage ) {
	std::cout << "ClapTrap " << name << " attacks " << target << ",causing "\
		 << damage << " points of damage!" << std::endl;
}

void		ClapTrap::attack(const std::string& target) {
	ClapTrap &head = Node::findTreeMember( target );
	if ( head.get_name() == "Tree Head" )
		if ( attackErrorMessage(this->name, target) )
			return;
	ClapTrap &victim = Node::findTreeMember(target);
	victim.takeDamage(this->attackDamage);
	this->energyPoints--;
	attackSuccessMessage(this->name, target, this->attackDamage);
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
