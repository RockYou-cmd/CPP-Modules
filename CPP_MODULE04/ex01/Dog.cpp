#include "Dog.h"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called\n";
	type = obj.type;
	brain = new Brain();
	*brain = *obj.brain;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignment operator called\n";
	type = obj.type;
	*brain = *obj.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog distructor called\n";
	delete brain;
}

std::string Dog::getidea(int i)
{
	return (brain->getidea(i));
}

void Dog::setidea(std::string idea, int i)
{
	brain->setidea(idea, i);
}

void Dog::makeSound() const
{
	std::cout << "hoow\n";
}