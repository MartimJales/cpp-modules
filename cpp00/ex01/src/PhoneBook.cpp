#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->index = 0;
}

PhoneBook::~PhoneBook(){}


void PhoneBook::addContact()
{
	this->book[this->index%8].updateContact();
	this->index++;
}

void	PhoneBook::search()
{
	if (this->index == 0){
		std::cout << "You have no contacts in this awesome phonebook :(" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Name" << "|";
	std::cout << std::setw(10) << "Surname" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::string(41, '-') << std::endl;

	for(int i = 0; i < std::min(this->index, 8); ++i)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->book[i].formatOutput(this->book[i].getName()) << "|";
		std::cout << std::setw(10) << this->book[i].formatOutput(this->book[i].getSurname()) << "|";
		std::cout << std::setw(10) << this->book[i].formatOutput(this->book[i].getNickname()) << "|" << std::endl;
	}

	int entryIndex = -1;
	bool validInput = false;

	while (!validInput)
	{
		std::cout << "Enter index of the entry to display: ";

		if (!(std::cin >> entryIndex))
		{
			std::cout << "Invalid input. Please enter a valid index." << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n')
			{
				continue;
			}
		}
		else if (entryIndex < 0 || entryIndex >= this->index)
		{
			std::cout << "Invalid index!" << std::endl;
		}
		else
		{
			validInput = true;
		}
	}
	std::cout << "Name: " << this->book[entryIndex].getName() << std::endl;
	std::cout << "Surname: " << this->book[entryIndex].getSurname() << std::endl;
	std::cout << "Nickname: " << this->book[entryIndex].getNickname() << std::endl;
	std::cin.clear();
	while (std::cin.get() != '\n')
	{
		continue;
	}
}
