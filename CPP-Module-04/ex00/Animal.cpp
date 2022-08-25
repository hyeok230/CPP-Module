#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{

}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator=(Animal const & src)
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void)
{

}

std::string	Animal::getType(void)
{

}