#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		virtual ~ScavTrap(void);

		ScavTrap& operator=(ScavTrap const &src); 

		void attack(const std::string& target);
		void guardGate(void);
};

#endif