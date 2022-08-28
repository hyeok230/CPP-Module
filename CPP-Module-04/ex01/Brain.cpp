#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 4 == 0)
			ideas[i] = "sleep";
		else if (i % 4 == 1)
			ideas[i] = "eat";
		else if (i % 4 == 2)
			ideas[i] = "play";
		else if (i % 4 == 0)
			ideas[i] = "rest";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const & src)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = src.ideas[i];
	}
	std::cout << "Brain operator = called" << std::endl;
	return (*this);
}

void Brain::getIdeaAdress(int i)
{
	std::cout << &ideas[i] << std::endl;
}