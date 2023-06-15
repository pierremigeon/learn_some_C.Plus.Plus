#include <iostream>
#include "Fixed.hpp"

int	main( void ) { 

	FixPoint a;
	FixPoint const b( FixPoint( 5.05f ) * FixPoint( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << FixPoint::max( a, b ) << std::endl;

	return 0; 
}
