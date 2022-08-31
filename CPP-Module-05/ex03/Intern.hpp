#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern & src);
		~Intern(void);

		Intern& operator=(const Intern & src);

		Form	*makeForm(std::string name, std::string target);
	private:
		
};

#endif