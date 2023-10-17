#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("NULL"), grade(150){
	std::cout << "(Bureaucrat) Default constructer called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade){
	std::cout << "(Bureaucrat) Name, value constructer called" << std::endl;
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat &copy): name(copy.getName()), grade(copy.getGrade()){
	std::cout << "(Bureaucrat) Copy constructer called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "(Bureaucrat) Destructer called" << std::endl;
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

void	Bureaucrat::signForm(Form &form){
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName()
			<< " because " << ex.what() << std::endl;
	}
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "<Bureaucrat> Grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "<Bureaucrat> Grade too high!";
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& bureaucrat) {
	os << "Name:" << bureaucrat.getName() << ", Grade:" << bureaucrat.getGrade();
	return os;
}
