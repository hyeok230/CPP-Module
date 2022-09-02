#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <cctype>

class Convert
{
	public:
		Convert(const std::string literals);
		~Convert(void);
	private:
		Convert(void);
		Convert(const Convert & src);
		Convert& operator=(const Convert & src);
};

std::ostream& operator<<(std::ostream os, const Convert & C);

#endif