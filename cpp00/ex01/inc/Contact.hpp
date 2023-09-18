#ifndef CONTACT_H

#define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string darkestSecret;
		std::string phoneNumber;
	public:
		Contact();
		~Contact();
		void updateContact();
		std::string formatOutput(const std::string& str);
		std::string getName();
		std::string getSurname();
		std::string getNickname();
		std::string getDarkestSecret();
		std::string getPhoneNumber();

		void		setName(std::string input);
		void		setSurname(std::string input);
		void		setNickname(std::string input);
		void		setDarkestSecret(std::string input);
		void		setPhoneNumber(std::string input);

};

#endif
