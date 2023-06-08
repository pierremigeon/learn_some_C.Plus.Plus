#include "Fixed.hpp"

//Default constructor
FixPoint::FixPoint( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

//constructor taking an int 
FixPoint::FixPoint( const int i ) {
	std::cout << "Int constructor called" << std::endl;
	this->value = i << this->fraction;
}

//constructor taking a float
FixPoint::FixPoint( const float f ) {
	int value = f * pow(2, this->fraction);
	this->value = value;
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

//<< operator overload 
std::ostream 	&operator<<( std::ostream &out, const FixPoint &FP) {
	//out << FP.toInt();
	out << FP.toFloat();
	return out;
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

int 	FixPoint::toInt( void ) const {
	int out;

	out = this->value >> this->fraction;
	return out;
}

float	FixPoint::toFloat( void ) const {
	float 	out;

	out = this->value * 1.0 / pow(2, this->fraction);
	return out;
}
