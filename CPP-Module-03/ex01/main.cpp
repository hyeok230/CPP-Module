#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(20);
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(20);
	
	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(20);
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(20);
	
	std::cout << std::endl;
	
	b.guardGate();
	
	std::cout << std::endl;
	return (0);
}