#include "Bureaucrat.hpp"
#include "Intern.hpp"

Bureaucrat	lvl42("lvl42", 42);
Intern		interno;

void	testMake(const std::string& title, const std::string& formName, const std::string& target) {

	std::cout << title << std::endl;

	Form* form = interno.makeForm(formName, target);

	std::cout << *form << std::endl;
	lvl42.signForm(*form);
	lvl42.executeForm(*form);

	delete form;
}

int	main() {
	try {
		testMake("\n\033[31mRobotmy Request\n" ,"robotomy request", "Bender");
		testMake("\n\033[32mPresidential Pardon\n" ,"presidential pardon", "lrocca");
		testMake("\n\033[33mShrubbery Creation\n" ,"shrubbery creation", "home");
		testMake("\n\033[34mNot a Form\n" ,"not a form", "you");
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
