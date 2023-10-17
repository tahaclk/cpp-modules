#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal - Default constructer called" << std::endl;
}

Animal::Animal(Animal &copy){
	*this = copy;
	std::cout << "Animal - Copy constructer called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal - Destructer called" << std::endl;
}

Animal & Animal::operator=(Animal const & arg){
	this->type = arg.getType();
	return *this;
}

void Animal::makeSound() const{
	std::cout << "some animal sound..." << std::endl;
}

std::string Animal::getType() const {
	return type;
}
