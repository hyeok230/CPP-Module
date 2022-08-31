#include "Form.hpp"

Form::Form(void): name("default"), isSigned(false), signGrade(150), executeGrade(150) {}

Form::Form(const Form& src) : name(src.name), isSigned(false), signGrade(src.signGrade), executeGrade(src.executeGrade) {}

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

Form::~Form(void) {}

Form& Form::operator=(const Form& src)
{
	isSigned = src.isSigned;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (name);
}
bool	Form::getIsSigned(void) const
{
	return (isSigned);
}

int		Form::getSignGrade(void) const
{
	return (signGrade);
}

int		Form::getExecuteGrade(void) const
{
	return (executeGrade);
}

void	Form::beSigned(const Bureaucrat& B)
{
	if (signGrade < B.getGrade())
		throw GradeTooLowException();
	isSigned = true;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw NotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw GradeTooLowException();
	action();
}

void	Form::action(void) const {}

std::ostream& operator<<(std::ostream& os, const Form& F)
{
	os << F.getName() << ", isSigned : " << F.getIsSigned() << ", signGrade : " << F.getSignGrade() << ", executeGrade : " << F.getExecuteGrade();
	return (os);
}