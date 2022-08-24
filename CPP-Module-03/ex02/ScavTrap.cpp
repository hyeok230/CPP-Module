#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " default constructor called"<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " string constructor called"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor (" << _name << ") called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
	ClapTrap::operator=(src);
	std::cout << "ScapTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " switch to guard mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << "has no Energypoint or Hitpoint." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"<< std::endl;
		_energyPoints--;
	}
}