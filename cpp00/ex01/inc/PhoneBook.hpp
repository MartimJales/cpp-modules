
#ifndef PHONEBOOK_H

#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	secret;
		std::string	phone;
		Contact		book[8];
		int index;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	search();


};

#endif
