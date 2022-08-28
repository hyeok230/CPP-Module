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
		virtual void makeSound(void) const = 0;
		virtual std::string	getType(void) const;
	protected:
		std::string type;
};

#endif