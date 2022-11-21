#ifndef CAT
#define CAT

#include <iostream>
#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();
		std::string getidea(int i);
		void setidea(std::string idea, int i);
		void makeSound() const;
};

#endif