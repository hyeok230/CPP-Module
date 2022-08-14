#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	private:
		int length;
		int old;
		Contact contacts[8];
		void PrintPhoneBook();
		void DisplayContact();
	public:
		PhoneBook();
		void AddContact();
		void SearchContact();
};

#endif