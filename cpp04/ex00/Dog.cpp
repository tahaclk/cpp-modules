#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog - Constructer called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog - Destructer called" << std::endl;
}

Dog::Dog(Dog &copy){
	this->type = copy.getType();
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Haw Haw bro" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}
