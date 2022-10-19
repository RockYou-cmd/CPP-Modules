#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointValue = obj.getRawBits();
}

void Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = obj.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}