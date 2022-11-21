#include "Cat.h"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called\n";
	type = obj.type;
	brain = new Brain();
	*brain = *obj.brain;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignment operator called\n";
	type = obj.type;
	*brain = *obj.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat distructor called\n";
	delete brain;
}

std::string Cat::getidea(int i)
{
	return (brain->getidea(i));
}

void Cat::setidea(std::string idea, int i)
{
	brain->setidea(idea, i);
}

void Cat::makeSound() const
{
	std::cout << "meaw\n";
}