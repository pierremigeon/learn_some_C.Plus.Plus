#ifndef FIX_POINT_H
# define FIX_POINT_H
# include <stdlib.h>
# include <iostream>

class FixPoint {
	int			value;
	static const int	fraction = 8;

	public:
	FixPoint( void );	
	FixPoint( const FixPoint &FP);
	void	operator=( const FixPoint &FP);
	~FixPoint( void );
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
