

class Node {
	const	std::string	name;
	Node	*left;
	Node	*right;

	Node(std::string _name);
	Node(const Node &n);
	void	operator=(const Node &n);
	~Node( void );


};
