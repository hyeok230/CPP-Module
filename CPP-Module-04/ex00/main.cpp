#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete i;
	delete j;

	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	
	k->makeSound();
	l->makeSound();

	delete k;
	delete l;	

	return 0;
}