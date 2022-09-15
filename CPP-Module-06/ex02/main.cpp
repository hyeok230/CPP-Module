#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>

Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return NULL;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A ob;
		ob = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		B ob;
		ob = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		C ob;
		ob = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e) {}
}

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		Base *p = generate();
		std::cout << "===============test" << i + 1 << "===============" << std::endl;
		identify(p);
		identify(*p);

		delete p;
	}
	return 0;
}