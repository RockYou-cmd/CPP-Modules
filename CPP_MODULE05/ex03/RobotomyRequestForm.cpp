#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form(_target, 72, 45)
{
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) : Form(obj)
{
	target = obj.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj)
{
	Form::operator=(obj);
	target = obj.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToE())
		throw Form::GradeTooLowException();
	std::cout << "drilling noises" << std::endl;
	std::cout << target << " has been robotomized successfully" << std::endl;
}