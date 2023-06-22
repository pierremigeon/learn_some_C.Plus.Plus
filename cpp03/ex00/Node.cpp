#include "Node.hpp"
#include "HeadPoint.hpp"

const	HeadPoint Node::Head;

Node	*Node::makeHead( void ) {
	ClapTrap &CT = *(new ClapTrap("Tree Head"));
	Node	*headNode = new Node (CT);
	std::cout << "Made headnode" << std::endl;
	return headNode;
}

void	Node::printNode( void ) {
	Node *head = Head.getHead();
	std::cout << "Entered PrintNOde" << std::endl;
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
 
Node::~Node( void ) { 
	delete &this->member;
}

//void	Node::placeInTree() {
//
//}
