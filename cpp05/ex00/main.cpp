#include "Bureaucrat.hpp"

int	main() {
	std::cout << "\n\033[31mCONSTRUCTER" << std::endl;

	std::cout << std::endl << "(1)" << std::endl;
	try {
		Bureaucrat	taha("taha", 1);
		std::cout << taha << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "(2)" << std::endl;
	try {
		Bureaucrat	ahmet("ahmet", 0);
		std::cout << ahmet << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "(3)" << std::endl;
	try {
		Bureaucrat	ahmet("ahmet", 151);
		std::cout << ahmet << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	std::cout <<  "\n\033[32mINCREASE" << std::endl;

	try {
		Bureaucrat	taha("taha", 12);
		std::cout << taha << std::endl;
		taha.increase(10);
		std::cout << taha << std::endl;
		taha.increase();
		std::cout << taha << std::endl;
		taha.increase(); // trying to be 0
		std::cout << taha << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n\033[33mDECREASE" << std::endl;

	try {
		Bureaucrat	taha("taha", 139);
		std::cout << taha << std::endl;
		taha.decrease(10);
		std::cout << taha << std::endl;
		taha.decrease();
		std::cout << taha << std::endl;
		taha.decrease(); // trying to be 151
		std::cout << taha << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
