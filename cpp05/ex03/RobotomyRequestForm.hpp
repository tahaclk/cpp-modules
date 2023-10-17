#pragma once
#include "AForm.hpp"

class RobotomyRequestForm: public Form{
	private:
		RobotomyRequestForm();
		virtual void	executePure() const;
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(RobotomyRequestForm &copy);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm & operator=(RobotomyRequestForm &value);
};
