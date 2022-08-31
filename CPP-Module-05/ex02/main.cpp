#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat human("junylee", 4);
		ShrubberyCreationForm myTree("tree");
		RobotomyRequestForm robotomy("robot");
		PresidentialPardonForm pardon("pardon");

		std::cout << human << std::endl;

		std::cout << myTree << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;

		// myTree.beSigned(human);
		// robotomy.beSigned(human);
		pardon.beSigned(human);

		// human.signForm(myTree);
		// human.signForm(robotomy);
		human.signForm(pardon);

		// myTree.execute(human);
		// robotomy.execute(human);
		pardon.execute(human);

		// human.executeForm(myTree);
		// human.executeForm(robotomy);
		human.executeForm(pardon);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}