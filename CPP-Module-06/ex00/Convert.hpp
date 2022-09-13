#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <cctype>
# include <cmath>

class Convert
{
	private:
		Convert(void);
		std::string value;

	public:
		Convert(const std::string &value);
		Convert(const Convert & src);
		Convert& operator=(const Convert & src);
		~Convert(void);
		
		char toChar(void) const;
		int toInt(void) const;
		float toFloat(void) const;
		double toDouble(void) const;

		class Impossible : public std::exception
		{
			const char *what() const throw()
			{
				return ("impossible");
			}
		};

		class NonDisplayable : public std::exception
		{
			const char *what() const throw()
			{
				return ("Non displayable");
			}
		};
};

std::ostream& operator<<(std::ostream& os, const Convert& C);

#endif