#include "Convert.hpp"

Convert::Convert(const std::string &value) : value(value) {}

Convert::~Convert(void) {}

std::string const &Convert::getValue(void) const
{
	return (value);
}
		
char Convert::toChar(void) const
{
	int c;

	try
	{
		c = std::stoi(value);
		if (c < 0 || c > 255)
		{
			throw Impossible();
		}
	}	
	catch (...)
	{
		throw Impossible();
	}
	if (!std::isprint(c))
	{
		throw NonDisplayable();
	}

	return (static_cast<char>(c));
}

int Convert::toInt(void) const
{
	int n;

	try
	{
		n = std::stoi(value);
	}	
	catch (...)
	{
		throw Impossible();
	}

	return (n);
}

float Convert::toFloat(void) const
{
	float f;

	try
	{
		f = std::stof(value);
	}	
	catch (...)
	{
		throw Impossible();
	}

	return (f);
}

double Convert::toDouble(void) const
{
	double d;

	try
	{
		d = std::stod(value);
	}	
	catch (...)
	{
		throw Impossible();
	}

	return (d);
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

		if (std::isnan(f) && std::signbit(f))
			os << "-";
		os << f;
		if (!std::isnan(f) && f - (int)f == 0)
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

		if (std::isnan(d) && std::signbit(d))
			os << "-";
		os << d;
		if (!std::isnan(d) && d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	return (os);
}