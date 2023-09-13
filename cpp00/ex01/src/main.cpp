#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <iostream>
#include <algorithm>


int main()
{
	PhoneBook pb;
	std::string input;
	while (1)
	{
		std::cout << "\n> ";
		std::getline(std::cin, input);
		std::transform(input.begin(), input.end(), input.begin(), ::toupper);
		if (input == "EXIT")
			break;
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.search();
	}
}
