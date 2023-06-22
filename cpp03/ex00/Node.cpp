#include "Node.hpp"

const Node	*Node::head = Node::makeHead();

Node	*Node::makeHead( void ) {
	ClapTrap *head = new ClapTrap("Tree Head");
	Node	*Head = new Node (*head);
	return Head;
}

void	Node::printNode( void ) {
	std::cout << "Head is :" << head->member.get_name() << std::endl;
	std::cout << "left is :" << head->left << std::endl;
	std::cout << "right is :" << head->right << std::endl;
}	

Node::Node(const ClapTrap &_member) : member(_member) {
	//this->placeInTree(member);
	this->left = NULL;
	this->right = NULL;
}

//Node::Node(const Node &n) {
//	operator=(n);
//}

/*
void	Node::operator=(const Node &n) {
	this->name = n.name;
	this->member = n.member;
	this->left = n.left;
	this->right = n.right;
}
*/
 
Node::~Node( void ) { ;}

//void	Node::placeInTree() {
//
//}
