#pragma once
#include "AForm.hpp"

class PresidentialPardonForm: public Form{
	private:
		PresidentialPardonForm();
		virtual void	executePure() const;
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(PresidentialPardonForm &copy);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm & operator=(const PresidentialPardonForm& value);
};

