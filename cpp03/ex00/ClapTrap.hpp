#include <iostream>
#include "Node.hpp"

class ClapTrap {
	std::string 	name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
	static Node	&treeHead;

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
};
