#include "Point.hpp"

int Point::id = 0;

Point::Point( void ) : x(0), y(0) {
	Point::id++;
	this->my_id = Point::id - 1;
}

Point::Point( const FixPoint &_x, const FixPoint &_y ) : x(_x), y(_y) {
	Point::id++;
	this->my_id = Point::id - 1;
}

Point::Point( Point &p ) {
	operator=(p);
}

Point	&Point::operator=( Point &p ) {
	Point::id++;
	this->my_id = Point::id - 1;
	return p;
}

Point::~Point() {
	std::cout << "destructor for point " << this->my_id + 1 << "/" << this->id << std::endl;
}

FixPoint	Point::area(Point const &a, Point const &b, Point const &c) {
	return(abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x*(a.y - b.y))/2);
}
