#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const int value)
{
	_value = value << _bits;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator=(Fixed const &src)
{
	_value = src._value;
	return (*this);
}

bool	Fixed::operator>(Fixed const &src) const
{
	return (this->_value > src._value);
}
		
bool	Fixed::operator<(Fixed const &src) const
{
	return (this->_value < src._value);
}

bool	Fixed::operator>=(Fixed const &src) const
{
	return (this->_value >= src._value);
}
	
bool	Fixed::operator<=(Fixed const &src) const
{
	return (this->_value <= src._value);
}

bool	Fixed::operator==(Fixed const &src) const
{
	return (this->_value == src._value);
}
	
bool	Fixed::operator!=(Fixed const &src) const
{
	return (this->_value != src._value);
}
	
Fixed	Fixed::operator+(Fixed const &src) const
{
	return (Fixed(this->toFloat() + src.toFloat()));
}
	
Fixed	Fixed::operator-(Fixed const &src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}
		
Fixed	Fixed::operator*(Fixed const &src) const
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}
		
Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed f(*this);
	this->_value++;
	return (f);
}
	
Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}
	
Fixed	Fixed::operator--(int)
{
	Fixed f(*this);
	this->_value--;
	return (f);
}


int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> _bits);
}

float	Fixed::toFloat(void) const
{
	return (float(_value) / (1 << _bits));
}

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const&	Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const&	Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}


std::ostream& operator<<(std::ostream &s, const Fixed &fixed)
{
	s << fixed.toFloat();
	return (s);
}