#include "WrongCat.h"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat copy constructor called\n";
	type = obj.type;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignment operator called\n";
	type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat distructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "meaw of WrongCat\n";
}