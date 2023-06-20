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
	FixPoint( const int i );
	FixPoint( const double f );
	FixPoint( const FixPoint &FP );
	void	operator=( const FixPoint &FP );
	~FixPoint( void );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	double	toFloat( void ) const;
	int	toInt( void ) const;

	static		FixPoint	&min( FixPoint &FP1, FixPoint &FP2 );
	static	const	FixPoint	&min( const FixPoint &FP1, const FixPoint &FP2 );
	static		FixPoint	&max( FixPoint &FP1, FixPoint &FP2 );
	static	const	FixPoint	&max( const FixPoint &FP1, const FixPoint &FP2 );

	FixPoint	&operator++( );
	FixPoint	operator++( int );
	FixPoint	&operator--( );
	FixPoint	operator--( int );
};

double		operator+( const int a, const FixPoint &b );
double		operator+( const FixPoint &a, const int b );
double		operator+( const FixPoint &a, const FixPoint &b );
double		operator+( const double a, const FixPoint &b );
double		operator+( const FixPoint &a, const double b );

double		operator-( const int a, const FixPoint &b );
double		operator-( const FixPoint &a, const int b );
double		operator-( const FixPoint &a, const FixPoint &b );
double		operator-( const double a, const FixPoint &b );
double		operator-( const FixPoint &a, const double b );

double		operator*( const int a, const FixPoint &b );
double		operator*( const FixPoint &a, const int b );
double		operator*( const FixPoint &a, const FixPoint &b );
double		operator*( const double a, const FixPoint &b );
double		operator*( const FixPoint &a, const double b );

double		operator/( const int a, const FixPoint &b );
double		operator/( const FixPoint &a, const int b );
double		operator/( const FixPoint &a, const FixPoint &b );
double		operator/( const double a, const FixPoint &b );
double		operator/( const FixPoint &a, const double b );

std::ostream    &operator<<( std::ostream &out, const FixPoint &FP );

bool		operator==( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator==( const FixPoint &FP, const int i );
bool		operator==( const int i, const FixPoint &FP );
bool		operator==( const FixPoint &FP, const double f );
bool		operator==( const double f, const FixPoint &FP );

bool		operator!=( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator!=( const FixPoint &FP, const int i );
bool		operator!=( const int i, const FixPoint &FP );
bool		operator!=( const FixPoint &FP, const double f );
bool		operator!=( const double f, const FixPoint &FP );

bool		operator<=( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator<=( const FixPoint &FP, const int i );
bool		operator<=( const int i, const FixPoint &FP );
bool		operator<=( const FixPoint &FP, const double f );
bool		operator<=( const double f, const FixPoint &FP );

bool		operator>=( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator>=( const FixPoint &FP, const int i );
bool		operator>=( const int i, const FixPoint &FP );
bool		operator>=( const FixPoint &FP, const double f );
bool		operator>=( const double f, const FixPoint &FP );

bool		operator>( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator>( const FixPoint &FP, const int i );
bool		operator>( const int i, const FixPoint &FP );
bool		operator>( const FixPoint &FP, const double f );
bool		operator>( const double f, const FixPoint &FP );

bool		operator<( const FixPoint &FP1, const FixPoint &FP2 );
bool		operator<( const FixPoint &FP, const int i );
bool		operator<( const int i, const FixPoint &FP );
bool		operator<( const FixPoint &FP, const double f );
bool		operator<( const double f, const FixPoint &FP );

#endif
