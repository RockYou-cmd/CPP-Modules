#ifndef Intern_h
#define Intern_h

#include <iostream>
#include "Form.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"


class Intern
{
	public:
		Intern();
		Intern(Intern const &obj);
		Intern &operator=(Intern const &obj);
		~Intern();

		Form *makeRobotomyRequestForm(std::string target);
		Form *makeShrubberyCreationForm(std::string target);
		Form *makePresidentialPardonForm(std::string target);
		Form *makeForm(std::string formName, std::string target);
};


#endif // !Intern_h