#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form(_target, 25, 5)
{
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) : Form(obj)
{
	target = obj.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj)
{
	Form::operator=(obj);
	target = obj.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToE())
		throw Form::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" <<  std::endl;
}