#ifndef HARL_H
# define HARL_H
# include <stdlib.h> 
# include <string>
# include <iostream>

class Harl {
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	public:
	void	complain( std::string level );
};

#endif
