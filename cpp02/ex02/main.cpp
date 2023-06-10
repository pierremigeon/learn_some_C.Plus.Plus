#include "Fixed.hpp"
#include <iostream>

int	main( void ) {


// == tests

	int x = 5;
	int y = 6;
	FixPoint a(5);
	FixPoint b(5);
	FixPoint c(6);
	FixPoint d(5.0f);
	FixPoint e(5.1f);
	FixPoint f(6.1f);

	//FP to FP true 
	std::cout << ( a == b ) << std::endl;
	//FP to FP false
	std::cout << ( a == c ) << std::endl;

	//FP to int true
	std::cout << ( a == x ) << std::endl;
	//FP to int false
	std::cout << ( a == y ) << std::endl;

	//int to FP true 
	std::cout << ( x == b ) << std::endl;
	//int to FP false 
	std::cout << ( y == b ) << std::endl;

	//FP to float true 
	std::cout << ( a == d ) << std::endl;
	//FP to float false 
	std::cout << ( a == e ) << std::endl;
	//FP to float false
	std::cout << ( a == f ) << std::endl;
 	
	//float to FP true 
	std::cout << ( d == a) << std::endl;
	//float to FP false 
	std::cout << ( e == a ) << std::endl;
	//float to FP false
	std::cout << ( f == a ) << std::endl;

// != tests 
	
	//FP to FP false 
	std::cout << ( a != b ) << std::endl;
	//FP to FP true
	std::cout << ( a != c ) << std::endl;

	//FP to int false
	std::cout << ( a != x ) << std::endl;
	//FP to int true
	std::cout << ( a != y ) << std::endl;

	//int to FP false 
	std::cout << ( x != b ) << std::endl;
	//int to FP true
	std::cout << ( y != b ) << std::endl;

	//FP to float false 
	std::cout << ( a != d ) << std::endl;
	//FP to float true
	std::cout << ( a != e ) << std::endl;
	//FP to float true
	std::cout << ( a != f ) << std::endl;
 	
	//float to FP false 
	std::cout << ( d != a) << std::endl;
	//float to FP true
	std::cout << ( e != a ) << std::endl;
	//float to FP true
	std::cout << ( f != a ) << std::endl;


	return 0; 
}
