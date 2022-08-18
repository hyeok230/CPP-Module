#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	int i;

	zombies = zombieHorde(10 ,"zombie");
	i = 0;
	while (i < 10)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return 0;
}