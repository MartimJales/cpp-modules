#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::updateContact()
{
	std::string input;
	std::cout << "\nFirst Name: " << std::flush;
	std::getline(std::cin, input);
	this->setName(input);

	std::cout << "\nLast Name: " << std::flush;
	std::getline(std::cin, input);
	this->setSurname(input);

	std::cout << "\nNickname: " << std::flush;
	std::getline(std::cin, input);
	this->setNickname(input);

	std::cout << "\nPhone Number: " << std::flush;
	std::getline(std::cin, input);
	this->setPhoneNumber(input);

	std::cout << "\nDarkest Secret: " << std::flush;
	std::getline(std::cin, input);
	this->setDarkestSecret(input);
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

std::string Contact::getDarkestSecret(){
	return this->darkestSecret;
}

std::string Contact::getPhoneNumber(){
	return this->phoneNumber;
}

void Contact::setName(std::string input){
	this->name = input;
}

void Contact::setSurname(std::string input){
	this->surname = input;
}

void Contact::setPhoneNumber(std::string input){
	this-> phoneNumber= input;
}

void Contact::setNickname(std::string input){
	this->nickname = input;
}

void Contact::setDarkestSecret(std::string input){
	this->darkestSecret = input;
}
