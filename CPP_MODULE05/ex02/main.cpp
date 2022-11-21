#include "Form.h"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	// try
	// {
	// 	Bureaucrat b("b", 150);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try
	// {
	// 	Bureaucrat b("b", 150);
	// 	b.incrementGrade();
	// 	std::cout << b.getGrade() << std::endl;
	// 	b.decrementGrade();
	// 	std::cout << b.getGrade() << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	try
	{
		Bureaucrat b("alae", 1);
		ShrubberyCreationForm f("home");
		RobotomyRequestForm r("noise");
		PresidentialPardonForm p("mr president");
		b.signForm(f);
		b.signForm(r);
		b.signForm(p);
		b.executeForm(f);
		b.executeForm(r);
		b.executeForm(p);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// try
	// {
	// 	Bureaucrat b("alae", 50);
	// 	Form f("water", 50, 50);
	// 	b.signForm(f);
	// 	std::cout << f.getIsSigned() << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}