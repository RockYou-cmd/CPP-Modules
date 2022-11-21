#ifndef DOG
#define DOG

#include <iostream>
#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();
		void makeSound() const;
};

#endif