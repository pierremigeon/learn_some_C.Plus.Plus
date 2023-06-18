
#ifndef POINT_H
# define POINT_H
# include <iostream>
# include "Fixed.hpp"

class Point {
	private:
	const FixPoint 		x;
	const FixPoint 		y; 
	static int		id;
	//const int		my_id;

	public:
	Point( void );
	Point( const FixPoint &x, const FixPoint &y );
	Point( Point &p );
	Point	&operator=( Point &p );
	static	int	area(Point a, Point b, Point c);
	~Point();
};

#endif
