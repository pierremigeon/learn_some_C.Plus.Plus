#include "Point.hpp"

int Point::id = 0;

Point::Point( void ) : x(0), y(0) {
	//this->my_id = this->id;
	this->id++;
}

Point::Point( const FixPoint &_x, const FixPoint &_y ) : x(_x), y(_y) {
	//this->my_id = this->id;
	this->id++; 
}

Point::Point( Point &p ) {
	operator=(p);
}

Point	&Point::operator=( Point &p ) {
	this->id++;
	//this->my_id = this->id;
	return p;
}

Point::~Point() {
	std::cout << "End of the road for point: " << this->id << std::endl;
}
