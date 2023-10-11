#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(const float num);
    Fixed(const int num);
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

    // Comparison operators
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

	// Arithmetic operators
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

	// Increment/Decrement operators
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

	// Static member functions for min and max
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);

private:
    int _value;
    static const int _rawBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
