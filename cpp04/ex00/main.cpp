#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *l = i;
	const Animal *m(i);

	Animal p;
	Animal *p2 = new Animal();
	std::cout << p.getType() << " " << std::endl;
	std::cout << p2->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;

	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();
	l->makeSound();
	m->makeSound();



	const WrongAnimal *p3 = new WrongAnimal();
	const WrongCat *p4 = new WrongCat();
	std::cout << p3->getType() << " " << std::endl; 
	std::cout << p4->getType() << " " << std::endl; 
	p3->makeSound(); //will output the cat sound! 
	p4->makeSound();
	meta->makeSound();




	delete meta;
	delete j;
	delete i;
	delete p2;
	delete p3;
	delete p4;

	return (0);
}
