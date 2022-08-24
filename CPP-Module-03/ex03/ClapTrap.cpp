#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("defult"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "Copy assignment operator called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "ClapTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "has no Energypoint or Hitpoint." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"<< std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " got " << amount << " of damage." << std::endl;
	std::cout << "ClapTrap " << _name << " hit points: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "has no Energypoint or Hitpoint." << std::endl;
	}
	else
	{
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " healed " << amount << " -> current hit points: " << _hitPoints <<std::endl;
		_energyPoints--;
	}
}