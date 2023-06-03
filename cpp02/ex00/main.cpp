#include "Fixed.hpp"



int	main() {
	FixPoint a;
	FixPoint b(a);
	FixPoint c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;


	return (0);
}
