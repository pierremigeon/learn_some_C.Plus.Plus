#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	return (Point::area(a,b,c) == (Point::area(a, b, point) + Point::area(a,c, point) + Point::area(b,c, point)));
}
