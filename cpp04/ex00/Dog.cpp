#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog", "Woof" ) { 
	std::cout << "Dog Constuctor called" << std::endl;
}

Dog::Dog( const Dog &_animal ) {
	std::cout << "Dog copy constructor called" << std::endl;
	operator=(_animal);
}

void	Dog::operator=( const Dog &_dog ) {
	std::cout << "Dog assignment operator overload called" << std::endl;
	Animal::operator=(_dog);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor called" << std::endl;
}
