#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <stdlib.h>
# include <string>
# include <stdlib.h>

class Node;

class ClapTrap {
	std::string 	name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

	public:
	ClapTrap( const std::string _name );
	ClapTrap( const ClapTrap &_ct );
	void	operator=( const ClapTrap &_ct );
	~ClapTrap( void );

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	unsigned int	get_HP() const;
	unsigned int	get_EP() const;
	unsigned int	get_AD() const;
	std::string	get_name() const;
	std::string	number_name( std::string name );
	int		nameExists( std::string name );
};
#endif
