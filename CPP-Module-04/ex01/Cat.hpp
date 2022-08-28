#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat& operator=(Cat const & src);
		void makeSound(void) const;
		Brain *getBrain(void);
	private:
		Brain *_brain;
};

#endif