#include "Cat.hpp"
#include "Dog.hpp"

int	check_any_equal(Animal &a, Animal &b, Animal &c) {
	if (a.getAddress() == b.getAddress() || 
	    a.getAddress() == c.getAddress() || 
		b.getAddress() == c.getAddress() )
			return (1);
	return (0);
}


int	main() {
	Animal	*k = new Cat();

	// Test for deep copy- a newly allocated brain object exists for each copy
	// K starts with first thought
	// a and b copies of K
	// each have identical first thought
	// changing k's thought does not change a's or b's thoughts
	// changing a and b thought doesn't change k nor change each other's thought 

	k->think("This is my first thought");
	k->giveThought(0);

	Animal a (*k);
	Animal b = *k;	

	a.giveThought(0);
	b.giveThought(0);

	k->think("This is my second thought");
	k->giveThought(0);
	a.giveThought(0);
	b.giveThought(0);
	
	a.think("This is my a's first original thought");
	b.think("This is my b's first original thought");
	k->giveThought(0);
	a.giveThought(0);
	b.giveThought(0);

	// Inspection of *brain address to further demonstrate deep copy:
	std::cout << k->getAddress() << std::endl;
	std::cout << a.getAddress() << std::endl;
	std::cout << b.getAddress() << std::endl;
	if ( check_any_equal(*k, a, b) )
		std::cout << "Deep copy failure!" << std::endl;

	// End tests for deep copy

	delete k;


	return (0);
}
