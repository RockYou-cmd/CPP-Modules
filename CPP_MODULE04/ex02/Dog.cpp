#include "Dog.h"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called\n";
	type = obj.type;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignment operator called\n";
	type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog distructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "hoow\n";
}