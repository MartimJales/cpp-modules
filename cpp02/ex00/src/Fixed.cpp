#include <Fixed.hpp>
#include "../../ex01/inc/Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

// Copy constructor.
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

// Copy assignment operator overload.
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return *this;
}

// Destructor.
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Member function to get the raw value of the fixed-point value.
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

// Member function to set the raw value of the fixed-point number.
void Fixed::setRawBits(int raw) {
	_value = raw;
}
