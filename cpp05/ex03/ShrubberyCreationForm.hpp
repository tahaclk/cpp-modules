#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form{
	private:
		ShrubberyCreationForm();
		virtual void	executePure() const;
	public:
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm &value);
};
