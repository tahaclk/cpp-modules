#pragma once
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
	protected:
		const std::string	name;
		bool				_signed;
		const int			gradeSign;
		const int			gradeExec;
		const std::string	target;
		Form();
		virtual void		executePure() const = 0;
	public:
		Form(const std::string& name, const std::string &target, int gradeSign, int gradeExec);
		Form(Form &copy);
		virtual ~Form();
		Form &				operator=(Form const &value);
		const std::string	getName() const;
		const std::string	getTarget() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		void				beSigned(const Bureaucrat &obj);
		void				execute(Bureaucrat const & bure) const;
		class GradeTooLowException: public std::exception{
			virtual const char *	what() const throw();
		};
		class GradeTooHighException: public std::exception{
			virtual const char *	what() const throw();
		};
		class AlreadySignedException: public std::exception{
			virtual const char *	what() const throw();
		};
		class UnsignedFormException: public std::exception{
			virtual const char *	what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &os, Form const &value);
