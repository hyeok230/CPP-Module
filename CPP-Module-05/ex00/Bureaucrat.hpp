#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);

		Bureaucrat& operator=(Bureaucrat const & src);

		std::string getName(void) const;
		int	getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Grade Too High");
			};
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Grade Too Low");
			};
		};

	private:
		const std::string name;
		int grade;
		Bureaucrat(void);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& B);

#endif