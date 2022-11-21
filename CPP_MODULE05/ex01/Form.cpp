#include "Form.h"

Form::Form(std::string const _name, int _gradeToS, int _gradeToE) : name(_name), isSigned(false), gradeToS(_gradeToS), gradeToE(_gradeToE)
{
	if (gradeToS < 1 || gradeToE < 1)
		throw Form::GradeTooHighException();
	else if (gradeToS > 150 || gradeToE > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &obj) : name(obj.name), gradeToS(obj.gradeToS), gradeToE(obj.gradeToE)
{
	isSigned = obj.isSigned;
}

Form &Form::operator=(Form const &obj)
{
	isSigned = obj.isSigned;
	return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

int Form::getGradeToS() const
{
	return gradeToS;
}

int Form::getGradeToE() const
{
	return gradeToE;
}

void Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() > gradeToS)
		throw Form::GradeTooLowException();
	else
		isSigned = true;
}

const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
	return " Grade too high";
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << obj.getName() << " | grade to sign: " << obj.getGradeToS() << " | form grade to execute: " << obj.getGradeToE() << " | form is signed: " << obj.getIsSigned() << std::endl;
	return out;
}

