#include "HeadPoint.hpp"
#include "Node.hpp"

HeadPoint::HeadPoint() {
	this->head = Node::makeHead();
}

HeadPoint::~HeadPoint() {
	delete this->head;
}

Node	*HeadPoint::getHead() const {
	return this->head;
}

