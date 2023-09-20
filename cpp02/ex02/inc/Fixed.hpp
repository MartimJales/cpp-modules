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
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int					_value;
		static const int	_rawBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
