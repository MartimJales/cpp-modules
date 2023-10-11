#include "../inc/Fixed.hpp"

Fixed::Fixed() {
	this->_value = 0;
}

Fixed::Fixed(const float num){
    _value = static_cast<int>(roundf(num * (1 << this->_rawBits)));
}

Fixed::Fixed(const int num){
	_value = num << _rawBits;
}

// Copy constructor.
Fixed::Fixed(const Fixed& other) {
	_value = other.getRawBits();
}

// Copy assignment operator overload.
Fixed& Fixed::operator=(const Fixed& other) {
	this->_value = other.getRawBits();
	return *this;
}

// Destructor.
Fixed::~Fixed(){}

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

bool Fixed::operator>(const Fixed &other) const
{
    return _value > other._value;
}

bool Fixed::operator<(const Fixed &other) const
{
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const
{
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return _value != other._value;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result._value = _value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result._value = _value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result._value = (_value * other._value) >> _rawBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
	if (other._value == 0)
	{
		std::cout << "can't divide by 0";
		return result;
	}
    result._value = (_value << _rawBits) / other._value;
    return result;
}

Fixed& Fixed::operator++()
{
    _value += (1);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--()
{
    _value -= (1);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a._value < b._value)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._value < b._value)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a._value > b._value)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._value > b._value)
        return a;
    return b;
}
