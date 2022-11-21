#include "identify.h"

Base * generate(void)
{
	int i;

	i = rand() % 3;
	if (!i)
		return new A;
	if (i == 1)
		return new B;
	if (i == 2)
		return new C;
	return NULL;
}

void identify(Base* p)
{
	std::cout << "pointer identify function called\n";
	A* a = dynamic_cast<A*> (p);
	B* b = dynamic_cast<B*> (p);
	C* c = dynamic_cast<C*> (p);
	if (a != NULL)
		std::cout << "A is the actual type\n";
	if (b != NULL)
		std::cout << "B is the actual type\n";
	if (c != NULL)
		std::cout << "C is the actual type\n";
}

void identify(Base& p)
{
	std::cout << "reference identify function called\n";
	try{
		A& a = dynamic_cast<A&> (p);
		std::cout << "A is the actual type\n";
		(void)a;
	}
	catch (std::bad_cast &e)
	{
	}
	try{
		B& b = dynamic_cast<B&> (p);
		std::cout << "B is the actual type\n";
		(void)b;
	}
	catch (std::bad_cast &e)
	{
	}
	try{
		C& c = dynamic_cast<C&> (p);
		std::cout << "C is the actual type\n";
		(void)c;
	}
	catch (std::bad_cast &e)
	{
	}
}