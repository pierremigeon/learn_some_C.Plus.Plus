#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat : public Animal { 
	public:
	Cat( void );
	Cat( const Cat &_cat );
	void	operator=( const Cat &_cat );
	~Cat( void );
};

#endif
