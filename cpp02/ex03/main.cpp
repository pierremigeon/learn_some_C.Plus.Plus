#include "Point.hpp"
#include "bsp.cpp"

int	main() {
	Point a(0, 10);
	Point b(10, 0);
	Point c(-10, 0);

	Point point(3,3);

	std::cout << "The point is inside: " << bsp(a,b,c,point) << std::endl;

	return (0);
}
