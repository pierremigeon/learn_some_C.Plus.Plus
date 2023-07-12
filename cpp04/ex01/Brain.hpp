#ifndef BRAIN_H 
# define BRAIN_H
# define BRAIN_SIZE 100
# include <iostream>

class Brain { 
	private:
	std::string ideas[BRAIN_SIZE];

	public:
	Brain( void );
	Brain( const std::string _type, const std::string _noise );
	Brain( const Brain &_animal );
	void	operator=( const Brain &_animal );
	~Brain( void );
};

#endif
