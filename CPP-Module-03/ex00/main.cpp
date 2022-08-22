#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	ClapTrap	c("c");

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(0);
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(0);
	std::cout << std::endl;
	c.attack("b");
	b.takeDamage(0);
	std::cout << std::endl;
	a.beRepaired(25);
	std::cout << std::endl;
	return (0);
}