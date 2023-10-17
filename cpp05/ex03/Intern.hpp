#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern;
typedef Form* (Intern::*funcs)(const std::string&)const;
class Intern
{
	private:
		static const std::string	formNames[3];
		static const funcs			formFuncs[3];
		Form*	presidentialPardonCreater(const std::string& target) const;
		Form*	robotomyRequestCreater(const std::string& target) const;
		Form*	shrubberyCreationCreater(const std::string& target) const;
	public:
		Intern();
		Intern(const Intern& copy);
		~Intern();
		Intern& operator=(Intern& value);
		Form*	makeForm(const std::string& formName, const std::string& target) const;
		class	WrongFormNameException: public std::exception{
			virtual const char *what() const throw();
		};
};
