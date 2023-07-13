#include "Animal.hpp"

int	Animal::total = 0;

Animal::Animal( void ) : type("Animal"), noise("") {
	std::cout << "Animal Constuctor called" << std::endl;
	this->total += 1;
	this->brain = new Brain();
	std::cout << this->total << std::endl;
}

Animal::Animal( const std::string _type, const std::string _noise ) : type(_type), noise(_noise) {
	this->brain = new Brain();
	std::cout << "Animal Constuctor called" << std::endl;
	this->total += 1;
	std::cout << this->total << std::endl;
}

Animal::Animal( const Animal &_animal ) {
	std::cout << "Animal copy constructor called" << std::endl;
	operator=(_animal);
}

void			Animal::operator=( const Animal &_animal ) {
	std::cout << "Animal assignment operator overload called" << std::endl;
	this->brain = new Brain(*_animal.brain);
	this->type = _animal.type;
	this->total += 1;
	std::cout << this->total << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal Destructor called" << std::endl;
	delete this->brain;
}

const std::string	&Animal::getType( void ) const {
	return this->type;
}

void			Animal::makeSound( void ) const {
	std::cout << this->noise << std::endl;
}

void			Animal::think( std::string thought ) {
	this->brain->newThought( thought );
}

void			Animal::giveThought( int x ) {
	std::cout << "thought " << x << " is : " << this->brain->giveThought(x) << std::endl;
}

const Brain	*Animal::getAddress( void ) const {
	return this->brain->giveAddress();
}
