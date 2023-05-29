#ifndef HARL_H
# define HARL_H
# include <stdlib.h> 
# include <string>
# include <iostream>

class Harl {
	typedef void (Harl::*fun_point)();
	fun_point	function[4];
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

	public:
	void	complain( std::string level );
	Harl();
};

#endif
