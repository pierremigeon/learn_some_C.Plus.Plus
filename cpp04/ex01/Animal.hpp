#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "Brain.hpp"

class Animal { 
	private:
	std::string type;
	std::string noise;
	Brain *brain;

	public:
	static int total;
	Animal( void );
	Animal( const std::string _type, const std::string _noise );
	Animal( const Animal &_animal );
	void	operator=( const Animal &_animal );
	~Animal( void );

	const	std::string	&getType() const;
	void			makeSound() const;
	void			think( std::string thought );
	void			giveThought( int x );
	const Brain     	*getAddress( void ) const ;
};

#endif
