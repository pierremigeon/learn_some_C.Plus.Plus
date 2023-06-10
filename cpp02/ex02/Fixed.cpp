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


//OVERLOAD FUNCTIONS

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

//> operator overload function
int	operator>( const FixPoint &FP1, const FixPoint &FP2 ) {
	return (FP1.toInt() > FP2.toInt());
}


//== OVERLOADS

//== operator overload function: FP TO FP
bool	operator==( const FixPoint &FP1, const FixPoint &FP2 ) {
	return (FP1.getRawBits() == FP2.getRawBits());
}

//== operator overload function: FP TO INT
bool	operator==( const FixPoint &FP, const int i ) {
	return (FP.toInt() == i);
}

//== operator overload function INT TO FP
bool	operator==( const int i, const FixPoint &FP ) {
	return (i == FP.toInt());
}

//== operator overload function: FP TO FLOAT
bool	operator==( const FixPoint &FP, const float f ) {
	return (FP.toFloat() == f);
}

//== operator overload function FLOAT TO FP
bool	operator==( const float f, const FixPoint &FP ) {
	return (f == FP.toFloat());
}

//!= OVERLOADS

//!= operator overload function: FP TO FP
bool	operator!=( const FixPoint &FP1, const FixPoint &FP2 ) {
	return (FP1.getRawBits() != FP2.getRawBits());
}

//!= operator overload function: FP TO INT
bool	operator!=( const FixPoint &FP, const int i ) {
	return (FP.toInt() != i);
}

//!= operator overload function INT TO FP
bool	operator!=( const int i, const FixPoint &FP ) {
	return (i != FP.toInt());
}

//!= operator overload function: FP TO FLOAT
bool	operator!=( const FixPoint &FP, const float f ) {
	return (FP.toFloat() != f);
}

//!= operator overload function FLOAT TO FP
bool	operator!=( const float f, const FixPoint &FP ) {
	return (f != FP.toFloat());
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
