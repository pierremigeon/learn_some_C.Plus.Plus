#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal"), noise("Moo") {
	std::cout << "WrongAnimal Constuctor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string _type ) : type(_type), noise("Moo") {
	std::cout << "WrongAnimal Constuctor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &_wronganimal ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	operator=(_wronganimal);
}

void		WrongAnimal::operator=( const WrongAnimal &_wronganimal ) {
	std::cout << "WrongAnimal assignment operator overload called" << std::endl;
	this->type = _wronganimal.type;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

const std::string	&WrongAnimal::getType( void ) const {
	return this->type;
}

void			WrongAnimal::makeSound( void ) const {
	std::cout << this->noise << std::endl;
}
