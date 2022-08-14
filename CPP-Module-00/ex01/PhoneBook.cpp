#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->length = 0;
	this->old = 0;
}

void PhoneBook::AddContact() {
	if (this->length == 8)
	{
		Contact contact;
		contact.InputContact();
		this->contacts[old] = contact;
		this->old++;
		if (old == 8)
			old = 0;
	}
	else
	{
		Contact contact;
		contact.InputContact();
		this->contacts[this->length] = contact;
		this->length++;
	}
}

void PhoneBook::DisplayContact() {
	int index;

	std::cout << "Enter index : ";
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(255, '\n');
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	if (index <= 0 || index > this->length)
		std::cout << "Out of range" << std::endl;
	else
		this->contacts[index - 1].PrintContact();
}

void PhoneBook::PrintPhoneBook() {
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < this->length; i++)
	{
		std::cout << std::setw(10) << i + 1;
		contacts[i].PrintShort();
	}
}

void PhoneBook::SearchContact() {
	if (this->length == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;	
	}
	this->PrintPhoneBook();
	this->DisplayContact();
	return ;
}

