#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
	return;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
	*this = src;
	return;
}

BitcoinExchange::~BitcoinExchange(void) {
	return;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	if (this != &rhs) {
		//Do whatever
	}
	return *this;
}


bool BitcoinExchange::loadData(std::string const &file) {
	// std::cout << "Loading data ..." << std::endl;
	try {
		std::ifstream inputFile(file.c_str());
		if (!inputFile.is_open()) {
			std::cerr << "Error: could not open file " << file << std::endl;
			return false;
		}
		std::string line;
		while (std::getline(inputFile, line)) {
			if (!_parseLine(line)) {
				std::cerr << "Error: could not parse line " << line << std::endl;
				return false;
			}
		}

		inputFile.close();
		return true;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return false;
	}
}

bool BitcoinExchange::_parseLine(std::string const &line) {
	std::string date;
	std::string priceStr;
	double price;

	date = line.substr(0, line.find(','));
	priceStr = line.substr(line.find(',') + 1);
	price = std::atof(priceStr.c_str());
	_data[date] = price;
	return true;
}

void BitcoinExchange::showData(void) {
	std::cout << "Showing data ..." << std::endl;
	for (std::map<std::string, double>::iterator it = _data.begin(); it != _data.end(); ++it) {
		std::cout << it->first << " => " << it->second << std::endl;
	}
}

void BitcoinExchange::run(std::string const &file) {
	try {
		std::ifstream inputFile(file.c_str());
		if (!inputFile.is_open()) {
			std::cerr << "Error: could not open file " << file << std::endl;
			return;
		}
		std::string line;
		std::getline(inputFile, line);
		while (std::getline(inputFile, line)){
			execLine(line);

		}

		inputFile.close();
		return ;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return ;
	}
}

void BitcoinExchange::execLine(std::string const &line) {
	std::string date;
	std::string valueStr;
	double value;

	// Extrai a data e o valor da linha
	date = line.substr(0, line.find('|') - 1);
	valueStr = line.substr(line.find('|') + 1);

	// Valida a data
	if (!isValidDate(date)) {
		std::cout << "Error: invalid date" << std::endl;
		return ;
	}

	// Converte o valor para double e valida
	value = std::atof(valueStr.c_str());
	if (value < 0 || value > 1000) {
		std::cout << "Error: value out of range " << std::endl;
		return ;
	}

	// Encontra a data no mapa ou a anterior adjacente
	std::map<std::string, double>::iterator it = _data.find(date);
        if (it == _data.end()) {
            // Se a data exata não for encontrada, procura a mais próxima anterior
            it = _data.lower_bound(date);
            if (it != _data.begin()) {
                --it;  // Retrocede para a data mais próxima anterior
            } else {
                std::cerr << "Error: no available exchange rate data before " << date << std::endl;
                return ;
            }
        }

	// Calcula o valor multiplicado pela taxa de câmbio e formata a saída
	double result = value * it->second;
	std::cout << date << " => " << value << " = " << result << std::endl;
}


bool BitcoinExchange::isValidDate(const std::string &date) {
	// std::cout << "Validating date " << date << std::endl;
	if (date.length() != 10) return false;
	if (date[4] != '-' || date[7] != '-') return false;

	std::string::const_iterator it = date.begin();
	for (int pos = 0; it != date.end(); ++it, ++pos) {
		if (pos != 4 && pos != 7 && !isdigit(*it)) return false;
	}

	std::string yearStr(date.begin(), date.begin() + 4);
	std::string monthStr(date.begin() + 5, date.begin() + 7);
	std::string dayStr(date.begin() + 8, date.end());

	int year = atoi(yearStr.c_str());
	int month = atoi(monthStr.c_str());
	int day = atoi(dayStr.c_str());

	if (month < 1 || month > 12) return false;
	if (day < 1 || day > 31) return false;
	if (year < 2009 || year > 2018) return false;

	// Check if is before 2009-01-02
	if (year == 2009 && month == 1 && day < 2) return false;
	return true;
}
