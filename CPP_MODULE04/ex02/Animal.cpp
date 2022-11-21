#include "Animal.h"
	
Animal::Animal()
{
	type = "animal";
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called\n";
	type = obj.type;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this == &obj)
		return *this;
	type = obj.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal distructor called\n";
}

std::string Animal::getType() const
{
	return (type);
}