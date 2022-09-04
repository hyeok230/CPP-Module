#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <cctype>
# include <cmath>

class Convert
{
	public:
		Convert(const std::string &value);
		~Convert(void);
		
		std::string const &getValue(void) const;
		
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
	private:
		Convert(void);
		Convert(const Convert & src);
		Convert& operator=(const Convert & src);

		std::string value;
};

std::ostream& operator<<(std::ostream& os, const Convert& C);

#endif