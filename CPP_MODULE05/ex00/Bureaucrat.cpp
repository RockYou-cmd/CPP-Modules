#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string const _name, int _grade) : name(_name)
{
	grade = _grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.name)
{
	grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	grade = obj.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const 
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return out;
}