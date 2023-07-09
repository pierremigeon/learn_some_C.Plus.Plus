#include "ClapTrap.hpp"
#include "Node.hpp"

int	ClapTrap::nameExists( std::string name ) {
	ClapTrap &check = Node::findTreeMember(name);

	if ( check.get_name() != "Tree Head" )
		return (1);
	return (0);
}

std::string	ClapTrap::number_name( std::string name ) {
	unsigned long	i;
	std::string	substring;
	int		num;

	for (i = name.length() - 1; i >= 0; i--)
		if (!isdigit(name[i]))
			break;
	substring = name.substr(++i, name.length());
	num = atoi(substring.c_str());
	while ( nameExists( name.substr( 0, i ) + std::to_string(num) ) )
		++num;
	return (name.substr(0, i) + std::to_string(num));
}

ClapTrap::ClapTrap( void ) : name("") {
	std::string _name = "";
	std::cout << "ClapTrap initialized" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	if ( _name == "Tree Head" )
		return ;
	if ( nameExists( _name ) )
		this->name = number_name( _name );
	Node::addTreeMember(*this);
	std::cout << "Claptrap " << _name << " has been initialized" << std::endl;
}

ClapTrap::ClapTrap( const std::string _name ) : name(_name) {
	std::cout << "ClapTrap initialized" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	if ( _name == "Tree Head" )
		return ;
	if ( nameExists( _name ) )
		this->name = number_name( _name );
	Node::addTreeMember(*this);
	std::cout << "Claptrap " << _name << " has been initialized" << std::endl;
}

ClapTrap::ClapTrap( const std::string _name, unsigned int hp, unsigned int ep, unsigned int ad ) : name( _name), hitPoints(hp), energyPoints(ep), attackDamage(ad) {
	if ( _name == "Tree Head" )
		return ;
	if ( nameExists( _name ) )
		this->name = number_name( _name );
	Node::addTreeMember(*this);
	std::cout << "Claptrap " << _name << " has been initialized" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &_ct ) {
	operator=(_ct);
}

void	ClapTrap::operator=( const ClapTrap &_ct ) {
	this->name = _ct.name;
	this->hitPoints = _ct.get_HP();
	this->energyPoints = _ct.get_EP();
	this->attackDamage = _ct.get_AD();
	if ( nameExists( _ct.name ) )
		this->name = number_name( _ct.name );
	Node::addTreeMember(*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " has been retired... destructor called." << std::endl;
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

int		ClapTrap::clapTrapDeadMessage() {
	std::cout << "ClapTrap " << this->name << " is defunct- not enough energy or hit points!!!" << std::endl;
	return (1);
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
	if ( this->hitPoints <= 0 || this->energyPoints <= 0 )
		if ( clapTrapDeadMessage( ) )
			return;
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
	if ( clapTrapDeadMessage( ) )
		return;
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << ", lost " << amount << " energy points from the damage of the attack!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ( this->hitPoints <= 0 || this->energyPoints <= 0 )
		if ( clapTrapDeadMessage( ) )
			return;
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " regained " << amount << " energy points by being repaired" << std::endl;
}
