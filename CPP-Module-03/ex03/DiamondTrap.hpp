#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		virtual ~DiamondTrap(void);

		DiamondTrap& operator=(DiamondTrap const & src);

		void whoAmI(void);
		using ScavTrap::attack;
	private:
		std::string _name;
};

#endif