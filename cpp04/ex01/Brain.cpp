
#include "Brain.hpp"
	
Brain::Brain( void ) { 
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain( const Brain &_brain ) {
	operator=(_brain);
}

void	Brain::operator=( const Brain &_brain ) {
	for (int i = 0; i < BRAIN_SIZE; i++ )
		this->ideas[i] = _brain.ideas[i];
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor" << std::endl;
}

void	Brain::newThought( std::string thought ) {
	this->ideas[0] = thought;
}
