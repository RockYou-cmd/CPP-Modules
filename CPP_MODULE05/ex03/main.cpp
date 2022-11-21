#include "Form.h"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main()
{
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
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}