#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		virtual ~FragTrap(void);

		FragTrap& operator=(FragTrap const & src);

		void highFivesGuys(void);
};

#endif