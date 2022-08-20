#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &src);
		
		Fixed& operator=(Fixed const &src);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_value;
		const static int _bits;
};

#endif