#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern & src);
		~Intern(void);

		Intern& operator=(const Intern & src);

		Form* makeForm(const std::string &name, const std::string &target);

		class InvaildFormName : public std::exception
		{
			const char *what() const throw()
			{
				return ("Form Name Passed As Parameter Doesn’t Exist");
			}
		};
};

#endif