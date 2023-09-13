#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::updateContact()
{
	std::string input;
	std::cout << "\nFirst Name: " << std::flush;
	std::getline(std::cin, input);
	this->setName(input);
	std::cout << input << std::endl;


	std::cout << "\nLast Name: " << std::flush;
	std::getline(std::cin, input);
	std::cout << input << std::endl;

	std::cout << "\nNickname: " << std::flush;
	std::getline(std::cin, input);
	std::cout << input << std::endl;

	std::cout << "\nPhone Number: " << std::flush;
	std::getline(std::cin, input);
	std::cout << input << std::endl;

	std::cout << "\nDarkest Secret: " << std::flush;
	std::getline(std::cin, input);
	std::cout << input << std::endl;
}

std::string Contact::formatOutput(const std::string& str)
{
	if(str.size() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

std::string Contact::getName(){
	return this->name;
}

std::string Contact::getSurname(){
	return this->surname;
}

std::string Contact::getNickname(){
	return this->nickname;
}

void Contact::setName(std::string input){

}
