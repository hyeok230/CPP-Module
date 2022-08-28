#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);

		WrongAnimal& operator=(WrongAnimal const & src);

		void makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string type;
};

#endif