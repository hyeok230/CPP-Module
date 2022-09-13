#include "Convert.hpp"

Convert::Convert(const std::string &value) : value(value) {}

Convert::Convert(const Convert & src) : value(src.value) {}

Convert::~Convert(void) {}

Convert& Convert::operator=(const Convert & src)
{
	value = src.value;
	return (*this);
}
		
char Convert::toChar(void) const
{
	int n;
	const char *str = value.c_str();
	char *stopstr = NULL;

	if (value.length() == 1 && (value[0] < '0' || value[0] > '9'))
	{
		return value[0];
	}

	n = static_cast<int>(strtod(str, &stopstr));
	if (n != 0 && !isinf(n) && !isnan(n) && n >= 0 && n <= 255)
	{
		if (!std::isprint(n))
			throw NonDisplayable();
		return static_cast<char>(n);
	}
	else
		throw Impossible();
}

int Convert::toInt(void) const
{
	double n;

	const char *str = value.c_str();
	char *stopstr = NULL;

	if (value.length() == 1 && value[0] == '0')
		return 0;
	n = strtod(str, &stopstr);
	if (n != 0 && !isinf(n) && !isnan(n))
		return static_cast<int>(n);
	else
		throw Impossible();
}

float Convert::toFloat(void) const
{
	float n;

	const char *str = value.c_str();
	char *stopstr = NULL;

	if (value.length() == 1 && value[0] == '0')
		return 0;
	n = strtod(str, &stopstr);
	if (n != 0)
		return static_cast<float>(n);
	else
		throw Impossible();
}

double Convert::toDouble(void) const
{
	double n;

	const char *str = value.c_str();
	char *stopstr = NULL;

	if (value.length() == 1 && value[0] == '0')
		return 0;
	n = strtod(str, &stopstr);
	if (n != 0)
		return n;
	else
		throw Impossible();
}

std::ostream& operator<<(std::ostream & os, const Convert & C)
{
	os << "char: ";
	try
	{
		char c = C.toChar();
		os << "'" << c << "'" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "int: ";
	try
	{
		os << C.toInt() << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "float: ";
	try
	{
		float f = C.toFloat();

		os << f;
		if (f - (int)f == 0)
			os << ".0";
		os << "f" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "double: ";
	try
	{
		double d = C.toDouble();

		os << d;
		if (d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	return (os);
}