#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"
# include <stdlib.h>

class ScavTrap: public virtual ClapTrap {

	public:
	ScavTrap( void );
	ScavTrap( const std::string _name );
	ScavTrap( const ClapTrap &_ct );
	void    operator=( const ScavTrap &_ct );
	~ScavTrap( void );

	void 	guardGate();
	void	attack(const std::string& target);
};

#endif
