#ifndef RobotomyRequestForm_h
#define RobotomyRequestForm_h

#include <iostream>
#include "Form.h"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(RobotomyRequestForm const & obj);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
		void execute(Bureaucrat const & executor) const;
};

#endif // !RobotomyRequestForm_h