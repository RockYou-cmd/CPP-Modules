#include "WrongAnimal.h"
	
WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called\n";
	type = obj.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this == &obj)
		return *this;
	type = obj.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal distructor called\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "which wronganimal you mean ?\n";
}

std::string WrongAnimal::getType() const
{
	return (type);
}