#ifndef BUREAUCRAT
#define	BUREAUCRAT

#include <iostream>
#include "Form.h"

class Form;

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat(std::string const _name, int _grade);
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat &operator=(Bureaucrat const &obj);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const ;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const _NOEXCEPT;
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const _NOEXCEPT;
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif // !BUREAUCRAT