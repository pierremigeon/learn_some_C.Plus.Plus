#include "Node.hpp"
#include "HeadPoint.hpp"

const	HeadPoint Node::Head;

Node	&Node::makeHead( void ) {
	ClapTrap &CT = *(new ClapTrap("Tree Head"));
	Node	&headNode = *(new Node (CT));
	std::cout << "Made headnode" << std::endl;
	return headNode;
}

void	Node::printNode( void ) {
	Node *head = &(Head.getHead());
	std::cout << "Head is :" << head->member.get_name() << std::endl;
	std::cout << "left is :" << head->left << std::endl;
	std::cout << "right is :" << head->right << std::endl;
}

ClapTrap	&Node::findTreeMember( std::string name ) {
	Node	&head = Node::Head.getHead();
	Node	*current = &head;

	while ( current != NULL && current->get_member_name() != name )
		current = ( current->get_member_name() > name ) ? current->left : current->right;
	if ( current != NULL )
		return ( current->get_member() );
	return ( head.get_member() );
}

void	Node::addTreeMember( ClapTrap &new_member) {
	Node	*current = &( Node::Head.getHead() );
	Node	*last = current;
	Node	*fresh = new Node (new_member);

	while ( current != NULL && (last = current))
		current = ( current->get_member_name() > new_member.get_name() ) \
			? current->left : current->right;
	if (last->get_member_name() > new_member.get_name() )
		last->left = fresh;
	else
		last->right = fresh;
}

Node::Node( ClapTrap &_member ) : member( _member ) {
	this->left = NULL;
	this->right = NULL;
}

Node::Node(const Node &n) : member(n.get_member()) {
	operator=(n);
}

void	Node::operator=(const Node &n) {
	this->member = n.get_member();
	this->left = n.left;
	this->right = n.right;
}
 
Node::~Node( void ) { 
	delete &this->member;
}

//void	Node::placeInTree() {
//
//}

std::string	Node::get_member_name( void ) const {
	return ( this->member.get_name() );
}

ClapTrap	&Node::get_member( void ) const {
	return ( this->member );
}
