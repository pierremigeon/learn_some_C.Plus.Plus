#ifndef NODE_H
# define NODE_H
# include "ClapTrap.hpp"
# include <iostream>

class Node {
	const	ClapTrap	&member;
	Node			*left;
	Node			*right;
	static const Node       *head;

	public:
	Node(const ClapTrap &member);
	Node(const Node &n);
	void	operator=(const Node &n);
	~Node( void );
	static	void	printNode( void );
	static	Node	*makeHead( void );
};

#endif
