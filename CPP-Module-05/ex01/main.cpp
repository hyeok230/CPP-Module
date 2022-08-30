#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat junylee("junylee", 42);

	Form secretForm("secretForm", 10, 10);
	std::cout << secretForm << std::endl;
	
	Form nomalForm("nomalForm", 120, 120);
	std::cout << nomalForm << std::endl;

	std::cout << std::endl;

	junylee.signForm(secretForm);
	junylee.signForm(nomalForm);

	std::cout << std::endl;

	std::cout << secretForm << std::endl;
	std::cout << nomalForm << std::endl;

}