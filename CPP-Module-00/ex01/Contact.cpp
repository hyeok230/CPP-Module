#include "Contact.hpp"

void	Contact::InputContact() {
	int i = 0;
	std::string input;

	std::cin.ignore();
	std::cout << "1. First name : ";
	while (std::getline(std::cin, input))
	{
		if (i == 0)
		{
			if (input == "")
			{
				std::cout << "Error: input must not be empty." << std::endl;
				std::cout << "1. First name : ";
				continue;
			}
			this->first_name = input;
			i++;
			std::cout << "2. Last name: ";
		}
		else if (i == 1)
		{
			if (input == "")
			{
				std::cout << "Error: input must not be empty." << std::endl;
				std::cout << "2. Last name: ";
				continue;
			}
			this->last_name = input;
			i++;
			std::cout << "3. Nickname : ";
		}
		else if (i == 2)
		{
			if (input == "")
			{
				std::cout << "Error: input must not be empty." << std::endl;
				std::cout << "3. Nickname : ";
				continue;
			}
			this->nickname = input;
			i++;
			std::cout << "4. Phone number : ";
		}
		else if (i == 3)
		{
			if (input == "")
			{
				std::cout << "Error: input must not be empty." << std::endl;
				std::cout << "4. Phone number : ";
				continue;
			}
			this->phone_number = input;
			i++;
			std::cout << "5. Darkest secret : ";
		}
		else if (i == 4)
		{
			if (input == "")
			{
				std::cout << "Error: input must not be empty." << std::endl;
				std::cout << "5. Darkest secret : ";
				continue;
			}
			this->darkest_secret = input;
			i++;
			break;
		}
	}
}

void	Contact::PrintContact() {
	std::cout << "first name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret : " << this->darkest_secret << std::endl;
}

std::string	Contact::FitWidth(std::string str) {
	if ((int)str.size() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - str.size(), ' ') + str);
}

void	Contact::PrintShort() {
	std::cout << \
		"|" << FitWidth(this->first_name) << \
		"|" << FitWidth(this->last_name) << \
		"|" << FitWidth(this->nickname) << \
		"|" << std::endl; 
}