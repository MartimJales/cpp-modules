#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <exception>
#include <cstdlib>

class BitcoinExchange {
	public:
		//OCF
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange(void);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);

		//Methods
		bool loadData(std::string const &file);
		void showData(void);
		void run(std::string const &file);
		void execLine(std::string const &line);
		bool isValidDate(std::string const &date);

	private:
		//Attributes
		std::map<std::string, double> _data;

		//Methods
		bool _parseLine(std::string const &line);

};

#endif
