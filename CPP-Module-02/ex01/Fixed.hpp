#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(const Fixed &src);
		~Fixed(void);

		Fixed& operator=(Fixed const &src);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
	private:
		int	_value;
		const static int _bits;
};

std::ostream& operator<<(std::ostream &s, const Fixed & fixed);

#endif