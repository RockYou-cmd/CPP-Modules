#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat b("b", 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("b", 150);
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("b", 150);
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}