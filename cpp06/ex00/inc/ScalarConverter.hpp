#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <cmath>

class ScalarConverter {
	public:
		~ScalarConverter();

		static bool isChar(std::string convert);
		static bool isInt(std::string convert);
		static bool isFloat(std::string convert);
		static bool isDouble(std::string convert);
		static bool isException(std::string convert);

		static bool isGreat(std::string convert, std::string num_limit);
		static bool isLess(std::string convert, std::string num_limit);

		static void printChar(std::string convert);
		static void printInt(std::string convert);
		static void printFloat(std::string convert);
		static void printDouble(std::string convert);
		static void printException(std::string convert);

		static void convert(std::string convert);

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);


};

#endif // SCALARCONVERTER_HPP
