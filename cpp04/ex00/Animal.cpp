#include "Animal.hpp"

Animal::Animal( void ) : type("Animal"), noise("") {
	std::cout << "Animal Constuctor called" << std::endl;
}

Animal::Animal( const std::string _type, const std::string _noise ) : type(_type), noise(_noise) {
	std::cout << "Animal Constuctor called" << std::endl;
}

Animal::Animal( const Animal &_animal ) {
	std::cout << "Animal copy constructor called" << std::endl;
	operator=(_animal);
}

void			Animal::operator=( const Animal &_animal ) {
	std::cout << "Animal assignment operator overload called" << std::endl;
	this->type = _animal.type;
}

Animal::~Animal( void ) {
	std::cout << "Animal Destructor called" << std::endl;
}

const std::string	&Animal::getType( void ) const {
	return this->type;
}

void			Animal::makeSound( void ) const {
	std::cout << this->noise << std::endl;
}
