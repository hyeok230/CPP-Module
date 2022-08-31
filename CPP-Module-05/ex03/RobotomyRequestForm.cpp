#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src), target(src.target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	Form::operator=(src);
	target = src.target;
	return (*this);
}

void	RobotomyRequestForm::action(void) const
{
	int iSecret;

	srand (time(NULL));
	iSecret = rand() % 10 + 1;
	std::cout << "Drrrrrrrr... Drrrrrr... Drr!" << std::endl;
	if (iSecret <= 5)
		std::cout << "Success : " << target << " is a robot!" << std::endl;
	else
		std::cout << "Fail : "<< target << " is a human!" << std::endl;
}