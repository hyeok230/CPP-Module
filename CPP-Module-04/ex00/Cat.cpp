#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const & src)
{
	type = src.type;
	std::cout << "Cat operator = called" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat make sound < meow >" << std::endl;
}