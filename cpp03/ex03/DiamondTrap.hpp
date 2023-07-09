#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
	std::string	name;

	public:
	DiamondTrap( const std::string _name );
	DiamondTrap( const DiamondTrap &_ct );
	DiamondTrap( const std::string _name, unsigned int hp, unsigned int ep, unsigned int ad );
	void	operator=( const DiamondTrap &_ct );
	~DiamondTrap( void );

	void		whoAmI();
};

#endif
