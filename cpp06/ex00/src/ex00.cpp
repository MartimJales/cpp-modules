#include "../inc/ex00.hpp"

void ScalarConverter::convert(const std::string& literal) {
    // Detect the type of the literal and convert it to char
    try {
        char charResult = std::stoi(literal);
        if (isprint(charResult)) {
            std::cout << "char: '" << charResult << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
    } catch (std::invalid_argument&) {
        std::cout << "char: impossible" << std::endl;
    } catch (std::out_of_range&) {
        std::cout << "char: impossible" << std::endl;
    }

    // Convert to int
    try {
        int intResult = std::stoi(literal);
        std::cout << "int: " << intResult << std::endl;
    } catch (std::invalid_argument&) {
        std::cout << "int: impossible" << std::endl;
    } catch (std::out_of_range&) {
        std::cout << "int: impossible" << std::endl;
    }

    // Convert to float
    try {
        float floatResult = std::stof(literal);
        std::cout << "float: " << floatResult << "f" << std::endl;
    } catch (std::invalid_argument&) {
        std::cout << "float: impossible" << std::endl;
    } catch (std::out_of_range&) {
        std::cout << "float: impossible" << std::endl;
    }

    // Convert to double
    try {
        double doubleResult = std::stod(literal);
        std::cout << "double: " << doubleResult << std::endl;
    } catch (std::invalid_argument&) {
        std::cout << "double: impossible" << std::endl;
    } catch (std::out_of_range&) {
        std::cout << "double: impossible" << std::endl;
    }
}

