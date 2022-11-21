#ifndef Form_h
#define	Form_h

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool isSigned;
		int const gradeToS;
		int const gradeToE;
	public:
		Form(std::string const _name, int _gradeToS, int _gradeToE);
		Form(Form const &obj);
		Form &operator=(Form const &obj);
		~Form();

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToS() const;
		int getGradeToE() const;
		void beSigned(Bureaucrat const &obj);

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

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif // !Form