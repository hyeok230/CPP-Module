#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
	
WrongAnimal::WrongAnimal(WrongAnimal const & src) : type(src.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src)
{
	type = src.type;
	std::cout << "WrongAnimal operator = called" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound not specified" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}