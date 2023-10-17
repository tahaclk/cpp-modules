#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("NULL"), grade(150){
	std::cout << "Default constructer called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade){
	std::cout << "Name, value constructer called" << std::endl;
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat &copy): name(copy.getName()), grade(copy.getGrade()){
	std::cout << "Copy constructer called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructer called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &value){
	this->grade = value.getGrade();
	return *this;
}

const std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void			Bureaucrat::increase(){
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade -= 1;
}

void			Bureaucrat::decrease(){
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade += 1;
}

void			Bureaucrat::increase(int amount){
	if (grade - amount < 1)
		throw GradeTooHighException();
	grade -= amount;
}

void			Bureaucrat::decrease(int amount){
	if (grade + amount > 150)
		throw GradeTooLowException();
	grade += amount;
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high!";
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& bureaucrat) {
	os << "Name:" << bureaucrat.getName() << ", Grade:" << bureaucrat.getGrade();
	return os;
}
