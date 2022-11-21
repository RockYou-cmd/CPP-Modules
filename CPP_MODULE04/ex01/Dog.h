#ifndef DOG
#define DOG

#include <iostream>
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();
		std::string getidea(int i);
		void setidea(std::string idea, int i);
		void makeSound() const;
};

#endif