#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const Form& src);
		Form(std::string name, int signGrade, int executeGrade);
		virtual ~Form(void);

		Form& operator=(const Form& src);

		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecuteGrade(void) const;
		void		beSigned(const Bureaucrat& B);
		void	execute(Bureaucrat const & executor) const;
		virtual void	action(void) const = 0;

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Grade Too High");
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Grade Too Low");
			}
		};

		class NotSigned : public std::exception
		{
			const char *what() const throw()
			{
				return ("Not Signed");
			}
		};

	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& F);

#endif