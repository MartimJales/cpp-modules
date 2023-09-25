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

Harl::Harl(){
	keys[0] = "debug";
	keys[1] = "info";
	keys[2] = "warning";
	keys[3] = "error";

	fun[0] = &Harl::debug;
	fun[1] = &Harl::info;
	fun[2] = &Harl::warning;
	fun[3] = &Harl::error;
}

void Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++)
		if (keys[i] == level)
			(this->*fun[i])();
}
