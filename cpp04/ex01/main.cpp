#include "Cat.hpp"
#include "Dog.hpp"

int	main() {
	Animal *array = new Animal[4];

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->newThought("word");

	for ( int x = 0; x < 4; x++ )
		array[x] = (x % 2) ? *i : *j;
	delete[] array;

	return (0);
}
