#ifndef ShrubberyCreationForm_h
#define ShrubberyCreationForm_h

#include <iostream>
#include <fstream>
#include "Form.h"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(ShrubberyCreationForm const & obj);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & obj);
		void execute(Bureaucrat const & executor) const;
};


#endif // ShrubberyCreationForm_h