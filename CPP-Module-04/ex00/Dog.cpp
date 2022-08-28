#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}
		
Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const & src)
{
	type = src.type;
	std::cout << "Dog operator = called" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog make sound < bowwow >" << std::endl;
}