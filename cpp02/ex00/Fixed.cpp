#include "Fixed.hpp"

FixPoint::FixPoint( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

FixPoint::FixPoint( const FixPoint &FP ) : value(FP.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

//operator assignemtn overload constructor
FixPoint	FixPoint::operator=( const FixPoint &FP ) {
	return FP;
}

FixPoint::~FixPoint( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	FixPoint::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	FixPoint::setRawBits( int const raw ) {
	this->value = raw;
}
