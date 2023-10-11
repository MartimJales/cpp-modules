#include <iostream>
#include "../inc/Fixed.hpp"

#include <iostream>
int
main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

// std::cout << "Comparison Operators:" << std::endl;
// std::cout << "a > b: " << (a > b) << std::endl;
// std::cout << "a < b: " << (a < b) << std::endl;
// std::cout << "a >= b: " << (a >= b) << std::endl;
// std::cout << "a <= b: " << (a <= b) << std::endl;
// std::cout << "a == b: " << (a == b) << std::endl;
// std::cout << "a != b: " << (a != b) << std::endl;

// // Arithmetic operators
// std::cout << "\nArithmetic Operators:" << std::endl;
// std::cout << "a + b: " << (a + b) << std::endl;
// std::cout << "a - b: " << (a - b) << std::endl;
// std::cout << "a * b: " << (a * b) << std::endl;
// std::cout << "a / b: " << (a / b) << std::endl;
//Fixed c(0);
//std::cout << b/c << std::endl;
return 0;
}


