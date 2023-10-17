#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "wrong cat";
	std::cout << "WrongCat - Default constructer called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy){
	*this = copy;
	std::cout << "WrongCat - Copy constructer called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat - Destructer called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & arg){
	this->type = arg.getType();
	return *this;
}

std::string WrongCat::getType() const{
	return type;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat says: Meow Meow bro" << std::endl;
}
