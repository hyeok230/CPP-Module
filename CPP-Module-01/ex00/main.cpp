#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1;
	Zombie *zombie2;

	zombie1 = newZombie("heap zombie1");
	zombie2 = newZombie("heap zombie2");

	randomChump("stack zombie");
	
	zombie1->announce();
	zombie2->announce();

	delete zombie1;
	delete zombie2;

	return 0;
}