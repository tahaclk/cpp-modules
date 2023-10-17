#include "AAnimal.hpp"

AAnimal::AAnimal(){
	this->type = "default";
    std::cout << "AAnimal - Default constructer called" << std::endl;
}

AAnimal::AAnimal(AAnimal &copy){
    *this = copy;
    std::cout << "AAnimal - Copy constructer called" << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal - Destructer called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & arg){
    this->type = arg.getType();
    return *this;
}

void AAnimal::makeSound() const{
    std::cout << "some AAnimal sound..." << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}
