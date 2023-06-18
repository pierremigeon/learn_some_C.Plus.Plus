#include "Point.hpp"

int Point::id = 0;

Point::Point( void ) : x(0), y(0) {
	this->id++;
}

Point::Point( const FixPoint &_x, const FixPoint &_y ) : x(_x), y(_y) {
	this->id++; 
}

Point::Point( Point &p ) {
	operator=(p);
}

Point	&Point::operator=( Point &p ) {
	this->id++;
	return p;
}

Point::~Point() {
	std::cout << "End of the road for point: " << this->id << std::endl;
}

FixPoint	Point::area(Point const &a, Point const &b, Point const &c) {
	return(abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x*(a.y - b.y))/2);
}
