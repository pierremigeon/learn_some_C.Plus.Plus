#ifndef DOG_H 
# define DOG_H
# include "Animal.hpp"

class Dog : public Animal { 
	public:
	Dog( void );
	Dog( const Dog &_ct );
	void	operator=( const Dog &_ct );
	~Dog( void );



};

#endif
