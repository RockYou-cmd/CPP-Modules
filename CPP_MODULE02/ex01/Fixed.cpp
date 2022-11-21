#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed & Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}

Fixed::Fixed(const int ivalue)
{
	std::cout << "int constractor called" << std::endl;
	fixedPointValue = ivalue * pow(2, fractionalBits);
}

Fixed::Fixed(const float fvalue)
{
	std::cout << "float constractor called" << std::endl;
	fixedPointValue = (int)roundf(fvalue * pow(2, fractionalBits));
}

float Fixed::toFloat(void) const
{
	return ((float)(fixedPointValue / pow(2 , fractionalBits)));
}

int Fixed::toInt(void) const
{
	return (fixedPointValue / pow(2 , fractionalBits));
}

std::ostream & operator<<(std::ostream &COUT,const Fixed &obj)
{
	COUT << obj.toFloat();
	return COUT;
}


