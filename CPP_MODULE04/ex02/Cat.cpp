#include "Cat.h"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called\n";
	type = obj.type;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignment operator called\n";
	type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat distructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "meaw\n";
}