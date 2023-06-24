#include "HeadPoint.hpp"
#include "Node.hpp"

HeadPoint::HeadPoint() : head(Node::makeHead()) { 
	Node::printNode();
}

HeadPoint::~HeadPoint() {
	delete &this->head;
}

Node	&HeadPoint::getHead() const {
	return this->head;
}
