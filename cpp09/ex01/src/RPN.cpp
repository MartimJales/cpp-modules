#include "../inc/RPN.hpp"

RPN::RPN(void) {
	return;
}

RPN::RPN(RPN const &src) {
	_data = src._data;
	return;
}

RPN &RPN::operator=(RPN const &rhs) {
	if (this != &rhs) {
		this->_data = rhs._data;
	}
	return *this;
}

RPN::~RPN(void) {
	return;
}

std::string doubleToString(double valor) {
    std::ostringstream oss;
    oss << valor;
    return oss.str();
}

int RPN::makeCalculus(std::string const &token) {
	double a = atof(this->_data.top().c_str());
	this->_data.pop();
	double b = atof(this->_data.top().c_str());
	this->_data.pop();
	if (token[0] == '+')
		this->_data.push(doubleToString(b + a));
	else if (token[0] == '-')
		this->_data.push(doubleToString(b - a));
	else if (token[0] == '*')
		this->_data.push(doubleToString(b * a));
	else if (token[0] == '/') {
		if (a == 0) {
			std::cout << "Error: division by zero" << std::endl;
			return 1;
		}
		this->_data.push(doubleToString(b / a));
	}
	return 0;
}

void RPN::run(std::string const &str) {
	char *tokens = strtok((char *)str.c_str(), " ");
	while (tokens != NULL) {
		if (tokens[0] == '+' || tokens[0] == '-' || tokens[0] == '*' || tokens[0] == '/') {
			if (this->_data.size() < 2) {
				std::cout << "Error: not enough values in the stack" << std::endl;
				return;
			}
			if (this->makeCalculus(tokens) == 1) return;
		}
		else if (tokens[0] >= '0' && tokens[0] <= '9') {
			this->_data.push(tokens);
		}
		else {
			std::cout << "Error: invalid token" << std::endl;
			return;
		}
		tokens = strtok(NULL, " ");
	}
	if (this->_data.size() != 1) {
		std::cout << "Error: invalid expression" << std::endl;
		return;
	}
	std::cout << this->_data.top() << std::endl;
	return;
}
