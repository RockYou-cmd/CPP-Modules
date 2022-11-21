#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

std::string Brain::getidea(int i)
{
	return (ideas[i]);
}

void Brain::setidea(std::string idea, int i)
{
	ideas[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}