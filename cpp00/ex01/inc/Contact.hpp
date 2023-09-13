#ifndef CONTACT_H

#define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string name;
		std::string surname;
		std::string nickname;
	public:
		Contact();
		~Contact();
		void updateContact();
		std::string formatOutput(const std::string& str);
		std::string getName();
		std::string getSurname();
		std::string getNickname();
		void		setname(std::string input);
		void		setSurname(std::string input);
		void		setNickname(std::string input);
		void		set
		

};

#endif
