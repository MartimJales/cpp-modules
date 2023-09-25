#include "../inc/Harl.hpp"

void Harl::debug() {
	std::cout << "Debug message." << std::endl;
}

void Harl::info() {
	std::cout << "Info message." << std::endl;
}

void Harl::warning() {
	std::cout << "Warning message." << std::endl;
}

void Harl::error() {
	std::cout << "Error message." << std::endl;
}


void Harl::complain(std::string level) {
	std::map<std::string, void (Harl::*)()> functions;
	functions.insert(std::make_pair("debug", &Harl::debug));
	functions.insert(std::make_pair("info", &Harl::info));
	functions.insert(std::make_pair("warning", &Harl::warning));
	functions.insert(std::make_pair("error", &Harl::error));

	(this->*(functions.find(level)->second))();
}
