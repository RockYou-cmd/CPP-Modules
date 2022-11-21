#include "Form.h"
#include "Bureaucrat.hpp"

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
		Bureaucrat b("alae", 50);
		Form f("water", 50, 50);
		b.decrementGrade();
		b.signForm(f);
		std::cout << f.getIsSigned() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("alae", 50);
		Form f("water", 50, 50);
		b.signForm(f);
		std::cout << f.getIsSigned() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}