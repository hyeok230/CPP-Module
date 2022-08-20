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

		Fixed&	operator=(Fixed const &src);
		bool	operator>(Fixed const &src) const;
		bool	operator<(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;
		Fixed	operator+(Fixed const &src) const;
		Fixed	operator-(Fixed const &src) const;
		Fixed	operator*(Fixed const &src) const;
		Fixed	operator/(Fixed const &src) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);
	private:
		int	_value;
		const static int _bits;
};

std::ostream& operator<<(std::ostream &s, const Fixed & fixed);

#endif