#include "AForm.hpp"

Form::Form(): name("NULL"), _signed(false), gradeSign(150), gradeExec(150), target("TARGET"){
	std::cout << "(Form) Default constructer called!" << std::endl;
}

Form::Form(const std::string& name, const std::string& target, int gradeSign, int gradeExec): name(name), _signed(false), gradeSign(gradeSign), gradeExec(gradeExec), target(target){
	std::cout << "(Form) Value assign constructer called!" << std::endl;
	if (gradeSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeSign < 1)
		throw Form::GradeTooHighException();
	if (gradeExec > 150)
		throw Form::GradeTooLowException();
	else if (gradeExec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form &copy): name(copy.getName()), _signed(false), gradeSign(copy.getGradeSign()),
		gradeExec(copy.getGradeExec()), target(copy.getTarget())
{
	std::cout << "(Form) Copy constructer called!" << std::endl;
	if (gradeSign > 150)
		throw GradeTooLowException();
	else if (gradeSign < 1)
		throw GradeTooHighException();
	if (gradeExec > 150)
		throw GradeTooLowException();
	else if (gradeExec < 1)
		throw GradeTooHighException();
}

Form::~Form(){
	std::cout << "(Form) Destructer called!" << std::endl;
}

Form &				Form::operator=(Form const &value){
	this->_signed = value._signed;
	return *this;
}

const std::string	Form::getName() const{
	return name;
}

const std::string	Form::getTarget() const{
	return target;
}

bool				Form::getSigned() const{
	return _signed;
}

int			Form::getGradeSign() const{
	return gradeSign;
}

int			Form::getGradeExec() const{
	return gradeExec;
}

const char *		Form::GradeTooHighException::what() const throw(){
	return ("<Form> Grade too high!");
}

const char *		Form::GradeTooLowException::what() const throw(){
	return ("<Form> Grade too low!");
}

const char *		Form::AlreadySignedException::what() const throw(){
	return ("<Form> Already signed!");
}

const char *		Form::UnsignedFormException::what() const throw(){
	return ("<Form> Form unsigned for execute!");
}

std::ostream &	operator<<(std::ostream &os, Form const &value){
	os << "Name:" << value.getName() << " -- isSigned:" << value.getSigned() <<
		" -- GradeSign:" << value.getGradeSign() << " -- GradeExec:" << value.getGradeExec();
	return (os);
}

void	Form::execute(Bureaucrat const & bure) const{
	if (!_signed)
		throw UnsignedFormException();
	if (bure.getGrade() > this->gradeExec)
		throw GradeTooLowException();
	executePure();
}

void	Form::beSigned(const Bureaucrat &obj){
	if (this->_signed)
		throw AlreadySignedException();
	if (this->gradeSign < obj.getGrade())
		throw GradeTooLowException();
	this->_signed = true;
}
