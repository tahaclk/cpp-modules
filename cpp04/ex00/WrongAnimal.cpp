#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal - Default constructer called" << std::endl;
	this->type = "animal";
}

WrongAnimal::WrongAnimal(WrongAnimal & copy){
	*this = copy;
	std::cout << "WrongAnimal - Copy constructer called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal - Deconstructer called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & arg){
	this->type = arg.getType();
	return *this;
}

std::string WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout << "some wrong animal sound" << std::endl;
}
