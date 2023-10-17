#pragma once
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				_signed;
		const int			gradeSign;
		const int			gradeExec;
		Form();
	public:
		Form(const std::string& name, int gradeSign, int gradeExec);
		Form(Form &copy);
		~Form();
		Form &				operator=(Form const &value);
		const std::string	getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		void				beSigned(const Bureaucrat &obj);
		class GradeTooLowException: public std::exception{
			virtual const char *	what() const throw();
		};
		class GradeTooHighException: public std::exception{
			virtual const char *	what() const throw();
		};
		class AlreadySignedException: public std::exception{
			virtual const char *	what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &os, Form const &value);
