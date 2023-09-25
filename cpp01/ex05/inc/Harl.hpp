#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl {
	private:
		std::string keys[4];
    	void (Harl::*fun[4])();
		void debug();
		void info();
		void warning();
		void error();

	public:
		Harl();
		void complain(std::string level);
};

#endif
