#ifndef NODE_H
# define NODE_H
# include "ClapTrap.hpp"
# include <iostream>

class HeadPoint;

class Node {
	ClapTrap	&member;

	public:
	Node			*left;
	Node			*right;
	static const HeadPoint	Head;

				Node( ClapTrap &member );
				Node( const Node &n );
	void			operator=( const Node &n );
				~Node( void );

	static void		printNode( void );
	static Node		&makeHead( void );
	std::string		get_member_name() const;
	ClapTrap		&get_member() const;
	static ClapTrap		&findTreeMember( std::string name );
	static void		addTreeMember( ClapTrap &new_member );
};

#endif
