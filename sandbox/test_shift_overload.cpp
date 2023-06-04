#include <stdlib.h>
#include <iostream>


class Example {
	public:
	static const int i = 5;

};

std::ostream&	operator<<( std::ostream& out, Example &x ) {
	out << x.i;
	return out;
}

int	main() {
	Example a;

	std::cout << a << std::endl;

	return (0);
}
