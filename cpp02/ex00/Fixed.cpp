#include "Fixed.hpp"

//Default constructor
FixPoint::FixPoint( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

//copy constructor
FixPoint::FixPoint( const FixPoint &FP ) {
	std::cout << "Copy constructor called" << std::endl;
	operator=(FP);
}

//operator assignment overload constructor
void	FixPoint::operator=( const FixPoint &FP ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = FP.getRawBits();
}

//Default destructor
FixPoint::~FixPoint( void ) {
	std::cout << "Destructor called" << std::endl;
}

//Retrieve FixPoint->value
int	FixPoint::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

//Set FixPoint->value
void	FixPoint::setRawBits( int const raw ) {
	this->value = raw;
}
