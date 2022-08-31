#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name), grade(src.grade) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
	grade = src.grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::increaseGrade(void)
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decreaseGrade(void)
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(Form &F) const
{
	try
	{
		F.beSigned(*this);
		std::cout << name << " signed " << F.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name << " couldn't sign " << F.getName() << " beacuse " << e.what() << std::endl; 
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (form.getExecuteGrade() < grade)
		throw GradeTooLowException();
	std::cout << name << " executes " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& B)
{
	os << B.getName() << ", bureaucrat grade " << B.getGrade();
	return (os);
}