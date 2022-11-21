#include "Cat.h"
#include "Dog.h"

int main()
{
	const Animal *Animals[8];
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
	}
	std::cout << "=======================\n";
	for (int i = 0; i < 8; i++)
	{
		delete Animals[i];
	}
}
