#ifndef FIX_POINT_H
# define FIX_POINT_H
# include <stdlib.h>
# include <iostream>
# include <math.h>

class FixPoint {
	int			value;
	static const int	fraction = 8;

	public:
	FixPoint( void );	
	FixPoint( const int i);
	FixPoint( const float f);
	FixPoint( const FixPoint &FP);
	void	operator=( const FixPoint &FP);
		void	operator>( const FixPoint &FP);
/*
		void	operator<( const FixPoint &FP);
		void	operator>=( const FixPoint &FP);
		void	operator<=( const FixPoint &FP);
		void	operator==( const FixPoint &FP);
		void	operator!=( const FixPoint &FP);
		void	operator+( const FixPoint &FP);
		void	operator-( const FixPoint &FP);
		void	operator*( const FixPoint &FP);
		void	operator/( const FixPoint &FP);
		FixPoint	min( FixPoint &FP1, FixPoint &FP2);
		FixPoint	min( const FixPoint &FP1, const FixPoint &FP2);
		FixPoint	max( FixPoint &FP1, FixPoint &FP2);
		FixPoint	max( const FixPoint &FP1, const FixPoint &FP2);
*/

	~FixPoint( void );
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int	toInt( void ) const;
};

std::ostream    &operator<<( std::ostream &out, const FixPoint &FP );

bool		operator==( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator==( const FixPoint &FP, const int i );
bool		operator==( const int i, const FixPoint &FP );
bool		operator==( const FixPoint &FP, const float f );
bool		operator==( const float f, const FixPoint &FP );

bool		operator!=( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator!=( const FixPoint &FP, const int i );
bool		operator!=( const int i, const FixPoint &FP );
bool		operator!=( const FixPoint &FP, const float f );
bool		operator!=( const float f, const FixPoint &FP );

#endif
