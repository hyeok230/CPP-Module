#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}
		
Dog::Dog(Dog const & src) : Animal(src)
{
	_brain = new Brain(*(src._brain));
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const & src)
{
	type = src.type;
	_brain = new Brain(*(src._brain));
	std::cout << "Dog operator = called" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog make sound < bowwow >" << std::endl;
}

Brain *Dog::getBrain(void)
{
	return (_brain);
}