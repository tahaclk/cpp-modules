#pragma once
#include "AForm.hpp"
#include <iostream>

class Form;

class Bureaucrat {
	private:
		const	std::string name;
		int		grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &		operator=(Bureaucrat const &value);
		const std::string	getName() const;
		int					getGrade() const;
		void				increase();
		void				decrease();
		void				increase(int amount);
		void				decrease(int amount);
		void				signForm(Form &form);
		void				executeForm(Form const & form);
		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& bureaucrat);
