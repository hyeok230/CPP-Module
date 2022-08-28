#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain& operator=(Brain const & src);
		void getIdeaAdress(int i);
	private:
		std::string ideas[100];
};

#endif