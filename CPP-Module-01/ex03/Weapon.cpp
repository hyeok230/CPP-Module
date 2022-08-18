#include "Weapon.hpp"

Weapon::Weapon(void)
{
};

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
};

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	&Weapon::getType(void)
{
	return _type;
}