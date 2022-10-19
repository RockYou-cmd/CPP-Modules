#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed  &operator = (const Fixed &obj);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(const int ivalue);
	Fixed(const float fvalue);
	float toFloat(void) const;
	int toInt(void) const;
	bool operator>(const Fixed& obj) const;
	bool operator<(const Fixed& obj) const;
	bool operator>=(const Fixed& obj) const;
	bool operator<=(const Fixed& obj) const;
	bool operator==(const Fixed& obj) const;
	bool operator!=(const Fixed& obj) const;
	Fixed operator+(const Fixed& obj);
	Fixed operator-(const Fixed& obj);
	Fixed operator*(const Fixed& obj);
	Fixed operator/(const Fixed& obj);
	Fixed operator--();
	Fixed operator--(int);
	Fixed operator++();
	Fixed operator++(int);
	static Fixed & min(Fixed &a, Fixed &b);
	static const Fixed & min(const Fixed &a, const Fixed &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static const Fixed & max(const Fixed &a,const Fixed &b);
};

std::ostream & operator<<(std::ostream &COUT,const Fixed &obj);

