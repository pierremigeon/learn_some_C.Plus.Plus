#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat", "Meow") { 
	std::cout << "Cat Constuctor called" << std::endl;
}

Cat::Cat( const Cat &_animal ) {
	std::cout << "Cat copy constructor called" << std::endl;
	operator=(_animal);
}

void	Cat::operator=( const Cat &_animal ) {
	std::cout << "Cat assignment operator overload called" << std::endl;
	Animal::operator=(_animal);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor called" << std::endl;
}
