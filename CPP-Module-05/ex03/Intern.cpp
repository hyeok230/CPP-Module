#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern & src) 
{
	(void)src;
}
	
Intern::~Intern(void) {}

Intern& Intern::operator=(const Intern & src) 
{
	(void)src;
	return (*this);
}

Form	*Intern::makeForm(const std::string &name, const std::string &target)
{
	Form* result = 0;

	const std::string names[3] = {
		"ShrubberyCreation",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	Form *forms[3];
	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			result = forms[i];
			continue;
		}
		delete forms[i];
	}

	if (!result)
		throw InvaildFormName();

	return (result);
}