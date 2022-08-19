#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

int Harl::returnIndex(std::string level, std::string levels[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return i;
	}
	return 4;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int idx;

	idx = returnIndex(level, levels); 

	switch (idx)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*(funcs[0]))();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*(funcs[1]))();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*(funcs[2]))();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*(funcs[3]))();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}