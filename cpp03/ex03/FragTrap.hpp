#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"
# include <stdlib.h>

class FragTrap: public virtual ClapTrap {
	public:
	FragTrap( void );
	FragTrap( const std::string _name );
	FragTrap( const ClapTrap &_ct );
	void	operator=( const FragTrap &_ct );
	~FragTrap( void );

	void	highFivesGuys(void);
};

#endif
