#include "Intern.h"

Intern::Intern()
{
}

Intern::Intern(Intern const &obj)
{
	(void)obj;
}

Intern &Intern::operator=(Intern const &obj)
{
	(void) obj;
	return *this;
}

Intern::~Intern()
{
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string Formname, std::string target)
{
	Form *form;
	int i = 0;

	std::string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	while(i < 3)
	{
		if (Formname == formNames[i])
		{
			std::cout << "Intern creates " << Formname << std::endl;
			break;
		}
		i++;	
	}
	switch (i)
	{
		case 0:
			form = makeRobotomyRequestForm(target);
			break;
		case 1:
			form = makeShrubberyCreationForm(target);
			break;
		case 2:
			form = makePresidentialPardonForm(target);
			break;
		default:
			std::cout << "There's no form with such name" << std::endl;
			return 0;
	}
	return form;
}