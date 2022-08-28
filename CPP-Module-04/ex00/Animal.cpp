#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src) : type(src.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator=(Animal const & src)
{
	type = src.type;
	std::cout << "Animal operator = called" << std::endl;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound not specified" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}