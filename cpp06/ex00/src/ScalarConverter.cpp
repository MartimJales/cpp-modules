// ScalarConverter.cpp
#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &) {
    // Implementação do operador de atribuição, se necessário
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(std::string convert) {
    return convert.length() == 1 && std::isprint(convert[0]);
}

bool ScalarConverter::isInt(std::string convert) {
    if (convert.empty()) return false;
    size_t start = (convert[0] == '-' || convert[0] == '+') ? 1 : 0;

    for (size_t i = start; i < convert.length(); ++i) {
        if (!std::isdigit(convert[i])) {
            return false;
        }
    }
    if (isGreat(convert, "2147483647"))
        return false;
    if (isLess(convert, "-2147483648"))
        return false;
    return true;
}

bool ScalarConverter::isFloat(std::string convert) {
    if (convert.empty()) return false;
    size_t start = (convert[0] == '-' || convert[0] == '+') ? 1 : 0;
    bool dot = false;

    for (size_t i = start; i < convert.length(); ++i) {
        if (convert[i] == '.') {
            if (dot) return false;
            dot = true;
        } else if (!std::isdigit(convert[i])) {
            return false;
        }
    }
    if (isGreat(convert, "3.4028235e+38"))
        return false;
    if (isLess(convert, "-3.4028235e+38"))
        return false;
    return true;
}

bool ScalarConverter::isDouble(std::string convert) {
    if (convert.empty()) return false;
    size_t start = (convert[0] == '-' || convert[0] == '+') ? 1 : 0;
    bool dot = false;

    for (size_t i = start; i < convert.length(); ++i) {
        if (convert[i] == '.') {
            if (dot) return false;
            dot = true;
        } else if (!std::isdigit(convert[i])) {
            return false;
        }
    }
    if (isGreat(convert, "1.7976931348623157e+308"))
        return false;
    if (isLess(convert, "-1.7976931348623157e+308"))
        return false;
    return true;
}

bool ScalarConverter::isException(std::string convert) {
    return convert == "nan" || convert == "nanf" || convert == "+inf" || convert == "+inff" || convert == "-inf" || convert == "-inff";
}

void ScalarConverter::printChar(std::string convert) {
    char c = static_cast<char>(convert[0]);
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}


void ScalarConverter::printInt(std::string convert) {
    int i = static_cast<int>(atoi(convert.c_str()));
    if (i < 32 || i > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    }
    std::cout << "int: "  << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverter::printFloat(std::string convert) {
    float f = static_cast<float>(atof(convert.c_str()));
    if (f < 32 || f > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: " << static_cast<char>(f) << std::endl;
    }
    if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min()) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    }
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::printDouble(std::string convert) {
    double d = static_cast<double>(atof(convert.c_str()));
    if (d < 32 || d > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: " << static_cast<char>(d) << std::endl;
    }
    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;

}

void ScalarConverter::printException(std::string convert) {
    if (convert == "nan" || convert == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    } else if (convert == "+inf" || convert == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    } else if (convert == "-inf" || convert == "-inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else {
        std::cout << "Invalid Input or Overflow" << std::endl;
    }
}

void ScalarConverter::convert(std::string convert) {
    std::cout << std::fixed << std::setprecision(1);
    if (isChar(convert)) {
        std::cout << "CHAR" << std::endl;
        printChar(convert);
    } else if (isInt(convert)) {
        std::cout << "INT" << std::endl;
        printInt(convert);
    } else if (isFloat(convert)) {
        std::cout << "FLOAT" << std::endl;
        printFloat(convert);
    } else if (isDouble(convert)) {
        std::cout << "DOUBLE" << std::endl;
        printDouble(convert);
    } else {
        printException(convert);
    }
}

bool ScalarConverter::isGreat(std::string convert, std::string num_limit) {
    if (convert.length() < num_limit.length()) {
        return false;
    }
    else if (convert.length() > num_limit.length()) {
        return true;
    }
    else {
        return convert > num_limit;
    }
}

bool ScalarConverter::isLess(std::string convert, std::string num_limit) {
    if (convert[0] != '-') {
        return false;
    }
    if (convert.length() < num_limit.length()) {
        return false;
    }
    // Se for mais longa, é definitivamente menor
    else if (convert.length() > num_limit.length()) {
        return true;
    }
    // Se tiver o mesmo tamanho, compare lexicograficamente
    else {
        return convert < num_limit;
    }
}
