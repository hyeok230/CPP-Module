#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;

	while (!std::cin.eof())
	{
		std::cout << "Enter command : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			phonebook.AddContact();
		else if (cmd == "SEARCH")
			phonebook.SearchContact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "command not found" << std::endl;
	}
	return (0);
}