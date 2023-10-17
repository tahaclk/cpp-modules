#include "Intern.hpp"

const std::string Intern::formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
const funcs Intern::formFuncs[3] = {&Intern::robotomyRequestCreater, &Intern::shrubberyCreationCreater, &Intern::presidentialPardonCreater};

Intern::Intern(){

}

Intern::Intern(const Intern& copy){
	(void) copy;
}

Intern::~Intern(){

}

Intern& Intern::operator=(Intern& value){
	(void) value;
	return (*this);
}

Form*	Intern::presidentialPardonCreater(const std::string& target) const{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::robotomyRequestCreater(const std::string& target) const{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::shrubberyCreationCreater(const std::string& target) const{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeForm(const std::string& formName,const std::string& target) const{
	for (int i = 0; i < 3; i++)
		if (!formName.compare(formNames[i]))
			return (this->*formFuncs[i])(target);
	throw WrongFormNameException();
}

const char *Intern::WrongFormNameException::what() const throw(){
	return ("Form name not matched with default form names!");
}
