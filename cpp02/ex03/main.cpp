#include "Point.hpp"
#include "bsp.hpp"

void	tester(Point a, Point b, Point c, Point point) {
	std::cout << "The point is inside: " << (bsp(a,b,c,point) ? "Yes" : "No") << std::endl;
}

int	main() {
	Point a(0, 10);
	Point b(10, 0);
	Point c(-10, 0);

	Point p(100,100);

	std::cout << "The point is inside: " << (bsp(a,b,c,p) ? "Yes" : "No") << std::endl;
	//point = Point(100,100);
	std::cout << "The point is inside: " << (bsp(a,b,c,p) ? "Yes" : "No") << std::endl;

	return (0);
}
