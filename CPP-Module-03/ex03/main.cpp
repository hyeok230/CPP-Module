#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	a("A");

	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	
	{
		DiamondTrap b("B");
		DiamondTrap c("C");


		std::cout << std::endl;
		
		b.whoAmI();
		c.whoAmI();		
		c.highFivesGuys();
		
		std::cout << std::endl;
		
		b.attack("C");
		c.takeDamage(30);
		
		std::cout << std::endl;
		
		b.attack("C");
		c.takeDamage(30);
		
		std::cout << std::endl;
		
		b.guardGate();
		
		std::cout << std::endl;
	}

	std::cout << std::endl;
	
	DiamondTrap d;
	
	std::cout << std::endl;
	
	d.whoAmI();
	
	std::cout << std::endl;

	d = a;
	
	std::cout << std::endl;
	
	d.whoAmI();
	
	std::cout << std::endl;
	return (0);
}