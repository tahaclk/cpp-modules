#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	std::cout << "\n\033[32mCONSTRUCTER" << std::endl;
	try{
		Bureaucrat	lvl151("lvl151", 151);
	}catch(std::exception& ex){
		std::cerr << ex.what() << std::endl;
	}
	try{
		Bureaucrat	lvl0("lvl0", 0);
	}catch(std::exception& ex){
		std::cerr << ex.what() << std::endl;
	}
	Bureaucrat	lvl145("lvl145", 145);
	Bureaucrat	lvl137("lvl137", 137);
	Bureaucrat	lvl72("lvl72", 72);
	Bureaucrat	lvl45("lvl45", 45);
	Bureaucrat	lvl25("lvl25", 25);
	Bureaucrat	lvl5("lvl5", 5);
	std::cout << lvl145 << std::endl;
	std::cout << lvl137 << std::endl;
	std::cout << lvl72 << std::endl;
	std::cout << lvl45 << std::endl;
	std::cout << lvl25 << std::endl;
	std::cout << lvl5 << std::endl;

	std::cout <<  "\n\033[38;5;208mTESTS" << std::endl << std::endl;

	std::cout << "\t(1)" << std::endl;
	Form *obj;
	try {
		obj = new ShrubberyCreationForm("Lamppost");
		obj->beSigned(lvl145);
		obj->execute(lvl137);
		std::cout << *obj << std::endl;
		delete obj;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t(2)" << std::endl;
	try {
		obj = new RobotomyRequestForm("Boxer");
		obj->beSigned(lvl72);
		obj->execute(lvl45);
		std::cout << *obj << std::endl;
		delete obj;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t(3)" << std::endl;
	try {
		obj = new PresidentialPardonForm("Marvin");
		obj->beSigned(lvl25);
		obj->execute(lvl5);
		std::cout << *obj << std::endl;
		delete obj;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t(4)" << std::endl;
	try{
		lvl5.executeForm(PresidentialPardonForm("Jr.Marvin"));
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t(5)" << std::endl;
	try{
		PresidentialPardonForm as("Jr.Marvin");
		lvl5.signForm(as);
		lvl5.executeForm(as);
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n\033[31mDESTRUCTER" << std::endl;
}
