#include "Contact.hpp"

void	Contact::InputContact() {
	std::string input;

	std::cout << "| Enter contact info |" << std::endl;
	std::cin.ignore();
	input = "";
	while (input == "") 
	{
		std::cout << "first name : ";
		std::getline(std::cin, input);
	}
	this->first_name = input;
	input = "";
	while (input == "") 
	{
		std::cout << "last name : ";
		std::getline(std::cin, input);
	}
	this->last_name = input;
	input = "";
	while (input == "") 
	{
		std::cout << "nickname : ";
		std::getline(std::cin, input);
	}
	this->nickname = input;
	input = "";
	while (input == "") 
	{
		std::cout << "phone number : ";
		std::getline(std::cin, input);
	}
	this->phone_number = input;
	input = "";
	while (input == "") 
	{
		std::cout << "darkest secret : ";
		std::getline(std::cin, input);
	}
	this->darkest_secret = input;
	std::cout << "New contact created" << std::endl;
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