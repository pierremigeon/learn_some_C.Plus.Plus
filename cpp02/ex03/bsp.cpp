#include "Fixed.hpp"
#include "Point.hpp"

int	Point::area(Point const a, Point const b, Point const c) {
	return(abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x*(a.y - b.y))/2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	std::cout << Point::area(a,b,c) << std:endl;
	
	return true;//(Point::area(a,b,c) == (Point::area(a, b, point) + Point::area(a,c, point) + Point::area(b,c, point)));
}
