#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form(){

}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm",  target, 72, 45){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): Form(copy.getName(), copy.getTarget(), copy.getGradeSign(), copy.getGradeExec()) {

}

RobotomyRequestForm::~RobotomyRequestForm(){

}

void	RobotomyRequestForm::executePure() const{
	std::srand(time(0));
	if (rand() % 2)
		std::cout << this->target <<" has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomy failed." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& value){
	(void) value;
	return (*this);
}
