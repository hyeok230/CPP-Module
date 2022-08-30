#include "Bureaucrat.hpp"

int main()
{
	std::cout << "==== Test 1 ====" << std::endl;
	Bureaucrat b("junylee", 2);
	try
	{
		b.increaseGrade();
		std::cout << b << std::endl;
		b.increaseGrade();
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "==== Test 2 ====" << std::endl;
	Bureaucrat c("jun", 149);
	try
	{
		c.decreaseGrade();
		std::cout << c << std::endl;
		c.decreaseGrade();
		std::cout << c << std::endl;
		c.decreaseGrade();
		std::cout << c << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	
	std::cout << "==== Test 3 ====" << std::endl;
	try
	{
		Bureaucrat d("lee", -1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "==== Test 4 ====" << std::endl;
	try
	{
		Bureaucrat f("kim", 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}