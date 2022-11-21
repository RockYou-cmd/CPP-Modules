#ifndef WRONG_CAT
#define WRONG_CAT

#include <iostream>
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat();
		void makeSound() const;
};

#endif