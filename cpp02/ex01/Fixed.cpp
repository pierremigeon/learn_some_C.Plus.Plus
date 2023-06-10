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
	std::cout << "Float constructor called" << std::endl;
	int 	value;
	float 	temp;

	temp = f;
	temp *= pow(2, this->fraction);
	value = round(temp);
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
std::ostream 	&operator<<( std::ostream &out, const FixPoint &FP ) {
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

//toInt
int	FixPoint::toInt( void ) const {
	int out;

	out = this->value / pow(2, this->fraction);
	return( out );
}

//toFloat
float	FixPoint::toFloat( void ) const {
	float 	out;

	out = 1.0f *  this->value / pow(2, this->fraction);
	return( out );
}
