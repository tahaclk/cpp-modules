#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout << "Cat - Constructer called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat - Destructer called" << std::endl;
}

Cat::Cat(Cat &copy){
	this->type = copy.getType();
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow meow bro" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}
