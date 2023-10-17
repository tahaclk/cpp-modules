#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	std::cout << "\n\033[31mCONSTRUCTER" << std::endl;
	Bureaucrat	burro("burro", 42);
	std::cout << burro << std::endl;

	try {
		Form	formaccio("formaccio", 1000, 1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form	formaccio("formaccio", 42, 0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form	formino("formino", 42, 42);
		Form	formone("formone", 1, 1);

		std::cout << std::endl << formino << std::endl << formone << std::endl;

		std::cout <<  "\n\033[32mTESTS" << std::endl;

		burro.signForm(formino);
		std::cout << formino << std::endl;
		burro.signForm(formino);
		burro.signForm(formone);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\033[33mDESTRUCTER" << std::endl;
}
