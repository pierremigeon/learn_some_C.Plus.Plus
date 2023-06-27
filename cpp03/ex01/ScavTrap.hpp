#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"
# include <stdlib.h>

class ScavTrap: ClapTrap {
	public:
	ScavTrap( const std::string _name );
	ScavTrap( const ClapTrap &_ct );
	void    operator=( const ScavTrap &_ct );
	~ScavTrap( void );

	void guardGate();
};

#endif
