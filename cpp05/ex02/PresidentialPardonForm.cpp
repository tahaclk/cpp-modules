#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form(){

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("PresidentialPardonForm",  target, 25, 5){

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy.getName(), copy.getTarget(), copy.getGradeSign(), copy.getGradeExec()) {

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

void	PresidentialPardonForm::executePure() const{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& value){
	(void) value;
	return *this;
}
