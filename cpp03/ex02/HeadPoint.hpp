#ifndef HEADPOINT_H
# define HEADPOINT_H
class Node;

class HeadPoint {
	Node	&head;	

	public:
	HeadPoint(); 
	~HeadPoint();
	Node	&getHead() const;
};

#endif
