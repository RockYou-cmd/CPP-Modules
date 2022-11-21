#ifndef PresidentialPardonForm_h
#define PresidentialPardonForm_h

#include <iostream>
#include "Form.h"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm const & obj);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=(PresidentialPardonForm const & obj);
		void execute(Bureaucrat const & executor) const;
};


#endif // PresidentialPardonForm_h