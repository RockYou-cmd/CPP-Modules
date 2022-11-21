#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
	Animal();
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	virtual ~Animal();
	std::string getType() const ;
	virtual void makeSound() const = 0;
};

#endif