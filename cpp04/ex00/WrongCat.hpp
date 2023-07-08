#ifndef WCAT_H
# define WCAT_H
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal { 
	public:
	WrongCat( void );
	WrongCat( const WrongCat &_cat );
	void	operator=( const WrongCat &_cat );
	~WrongCat( void );
};

#endif
