#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal& operator=(Animal const & src);
		virtual void makeSound(void);
		virtual std::string	getType(void);
	protected:
		std::string type;
};

#endif