#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	_brain = new Brain(*(src._brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const & src)
{
	type = src.type;
	_brain = new Brain(*(src._brain));
	std::cout << "Cat operator = called" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat make sound < meow >" << std::endl;
}

Brain *Cat::getBrain(void)
{
	return (_brain);
}