#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
		try
	{
		Bureaucrat junylee("junylee", 1);
		Intern intern;
		Form *form;

		form = intern.makeForm("ShrubberyCreation", "tree");
		junylee.signForm(*form);
		junylee.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = intern.makeForm("RobotomyRequestForm", "robot");
		junylee.signForm(*form);
		junylee.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = intern.makeForm("PresidentialPardonForm", "pardon");
		junylee.signForm(*form);
		junylee.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = intern.makeForm("noName", "test");
		junylee.signForm(*form);
		junylee.executeForm(*form);
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}