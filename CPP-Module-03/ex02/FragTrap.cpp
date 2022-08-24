#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " default constructor called"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " string constructor called"<< std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor (" << _name << ") called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & src)
{
	ClapTrap::operator=(src);
	std::cout << "FragTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " positive high fives request" << std::endl;
}