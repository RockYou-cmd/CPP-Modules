#ifndef CAT
#define CAT

#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();
		void makeSound() const;
};

#endif