#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	_name = "defult";
	ClapTrap::_name += "_calp_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " default constructor called"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_calp_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " string constructor called"<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), FragTrap(src), ScavTrap(src), _name(src._name)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor (" << _name << ") called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "DiamondTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << _name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}