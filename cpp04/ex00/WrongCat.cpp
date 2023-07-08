#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") { 
	std::cout << "WrongCat Constuctor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &_animal ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	operator=(_animal);
}

void	WrongCat::operator=( const WrongCat &_animal ) {
	std::cout << "WrongCat assignment operator overload called" << std::endl;
	WrongAnimal::operator=(_animal);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor called" << std::endl;
}
