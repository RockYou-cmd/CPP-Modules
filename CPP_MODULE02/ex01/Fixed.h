#ifndef FIXED
#define FIXED 


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
};

std::ostream & operator<<(std::ostream &COUT,const Fixed &obj);

#endif // FIXED
