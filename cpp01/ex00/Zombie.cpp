#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){}
Zombie::~Zombie(){
    std::cout<< this->getName() << " super death" << std::endl;
}

void    Zombie::setName( std::string name ){
    this->Name = name;
}

std::string Zombie::getName( void ){
    return this->Name;
}

void    Zombie::announce( void ){
    std::cout<< this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
