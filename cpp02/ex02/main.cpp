#include "Fixed.hpp"
#include <iostream>

int	main( void ) {

// == tests

	int x = 5;
	int y = 6;
	double z_0 = 5.0f;
	double z_1 = 5.5f;
	double z_2 = 6.0f;
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

	//FP to FP.float true 
	std::cout << ( a == d ) << std::endl;
	//FP to FP.float false
	std::cout << ( a == e ) << std::endl;

	//FP to int true
	std::cout << ( a == x ) << std::endl;
	//FP to int false
	std::cout << ( a == y ) << std::endl;

	//int to FP true 
	std::cout << ( x == b ) << std::endl;
	//int to FP false 
	std::cout << ( y == b ) << std::endl;

	//FP to float true 
	std::cout << ( a == z_0 ) << std::endl;
	//FP to float false 
	std::cout << ( a == z_1 ) << std::endl;
	//FP to float false
	std::cout << ( a == z_2 ) << std::endl;
 	
	//float to FP true 
	std::cout << ( z_0 == a) << std::endl;
	//float to FP false 
	std::cout << ( z_1 == a ) << std::endl;
	//float to FP false
	std::cout << ( z_2 == a ) << std::endl;

// != tests 
	
	//FP to FP true 
	std::cout << ( a != c ) << std::endl;
	//FP to FP false
	std::cout << ( a != b ) << std::endl;
	
	//FP to FP.float true 
	std::cout << ( a != e ) << std::endl;
	//FP to FP.float false
	std::cout << ( a != d ) << std::endl;
	
	//FP to int true
	std::cout << ( a != y ) << std::endl;
	//FP to int false
	std::cout << ( a != x ) << std::endl;

	//int to FP true
	std::cout << ( y != b ) << std::endl;
	//int to FP false 
	std::cout << ( x != b ) << std::endl;

	//FP to float true
	std::cout << ( a != z_2 ) << std::endl;
	//FP to float false 
	std::cout << ( a != z_0 ) << std::endl;
	//FP to float false
	std::cout << ( b != z_0 ) << std::endl;
 	
	//float to FP true
	std::cout << ( z_2 != a) << std::endl;
	//float to FP false
	std::cout << ( z_0 != a ) << std::endl;
	//float to FP false
	std::cout << ( z_0 != b ) << std::endl;

// > tests 
	
	//FP to FP true
	std::cout << ( c > a ) << std::endl;
	//FP to FP false 
	std::cout << ( a > b ) << std::endl;
	
	//FP to FP.float true
	std::cout << ( c > d ) << std::endl;
	//FP to FP.float false 
	std::cout << ( a > d ) << std::endl;

	//FP to int true
	std::cout << ( c > x ) << std::endl;
	//FP to int false
	std::cout << ( a > x ) << std::endl;

	//int to FP true
	std::cout << ( y > a ) << std::endl;
	//int to FP false 
	std::cout << ( x > c ) << std::endl;

	//FP to float true
	std::cout << ( c > z_0 ) << std::endl;
	//FP to float false 
	std::cout << ( a > z_0 ) << std::endl;
	//FP to float false
	std::cout << ( e > z_1 ) << std::endl;
	
	//float to FP true
	std::cout << ( z_2 > a ) << std::endl;
	//float to FP false
	std::cout << ( z_0 > a ) << std::endl;
	//float to FP false
	std::cout << ( z_0 > e ) << std::endl; 

// < tests 

	//FP to FP true
	std::cout << ( a < c ) << std::endl;
	//FP to FP false 
	std::cout << ( b < a ) << std::endl;
	
	//FP to FP.float true
	std::cout << ( d < c ) << std::endl;
	//FP to FP.float false 
	std::cout << ( d < a ) << std::endl;

	//FP to int true
	std::cout << ( x < c ) << std::endl;
	//FP to int false
	std::cout << ( x < a ) << std::endl;

	//int to FP true
	std::cout << ( a < y ) << std::endl;
	//int to FP false 
	std::cout << ( c < x ) << std::endl;

	//FP to float true
	std::cout << ( z_0 < c ) << std::endl;
	//FP to float false 
	std::cout << ( z_0 < a ) << std::endl;
	//FP to float false
	std::cout << ( z_1 < e ) << std::endl;
	
	//float to FP true
	std::cout << ( a < z_2 ) << std::endl;
	//float to FP false
	std::cout << ( a < z_0 ) << std::endl;
	//float to FP false
	std::cout << ( e < z_0 ) << std::endl; 



// >= tests 
	
	//FP to FP true
	std::cout << ( c > a ) << std::endl;
	//FP to FP false 
	std::cout << ( a > b ) << std::endl;
	
	//FP to FP.float true
	std::cout << ( c > d ) << std::endl;
	//FP to FP.float false 
	std::cout << ( a > d ) << std::endl;

	//FP to int true
	std::cout << ( c > x ) << std::endl;
	//FP to int false
	std::cout << ( a > x ) << std::endl;

	//int to FP true
	std::cout << ( y > a ) << std::endl;
	//int to FP false 
	std::cout << ( x > c ) << std::endl;

	//FP to float true
	std::cout << ( c > z_0 ) << std::endl;
	//FP to float false 
	std::cout << ( a > z_0 ) << std::endl;
	//FP to float false
	std::cout << ( e > z_1 ) << std::endl;
	
	//float to FP true
	std::cout << ( z_2 > a ) << std::endl;
	//float to FP false
	std::cout << ( z_0 > a ) << std::endl;
	//float to FP false
	std::cout << ( z_0 > e ) << std::endl; 

// <= tests 

	//FP to FP true
	std::cout << ( a < c ) << std::endl;
	//FP to FP false 
	std::cout << ( b < a ) << std::endl;
	
	//FP to FP.float true
	std::cout << ( d < c ) << std::endl;
	//FP to FP.float false 
	std::cout << ( d < a ) << std::endl;

	//FP to int true
	std::cout << ( x < c ) << std::endl;
	//FP to int false
	std::cout << ( x < a ) << std::endl;

	//int to FP true
	std::cout << ( a < y ) << std::endl;
	//int to FP false 
	std::cout << ( c < x ) << std::endl;

	//FP to float true
	std::cout << ( z_0 < c ) << std::endl;
	//FP to float false 
	std::cout << ( z_0 < a ) << std::endl;
	//FP to float false
	std::cout << ( z_1 < e ) << std::endl;
	
	//float to FP true
	std::cout << ( a < z_2 ) << std::endl;
	//float to FP false
	std::cout << ( a < z_0 ) << std::endl;
	//float to FP false
	std::cout << ( e < z_0 ) << std::endl; 


	return 0; 
}
