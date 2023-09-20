#include "../inc/Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const float num){
    _value = static_cast<int>(roundf(num * (1 << this->_rawBits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int num){
	_value = num << _rawBits;
	std::cout << "Int constructor called" << std::endl;
}

// Copy constructor.
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

// Copy assignment operator overload.
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return *this;
}

// Destructor.
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Member function to get the raw value of the fixed-point value.
int Fixed::getRawBits() const {
	return _value;
}

// Member function to set the raw value of the fixed-point number.
void Fixed::setRawBits(int raw) {
	_value = raw;
}

float Fixed::toFloat( void ) const{
	return (float)_value / (1 << _rawBits);
}

int Fixed::toInt( void ) const{
	return _value >> _rawBits;

}

std::ostream &operator<<(std::ostream &os, const Fixed &obj){
	os << obj.toFloat();
    return os;
}
