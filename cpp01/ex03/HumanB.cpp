#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name2){
    this->setName(name2);
    std::cout << "HumanB " << this->getName()
        << " is created with no weapon" << std::endl;
}

HumanB::~HumanB(){
    std::cout << "HumanB " << this->getName() << " is destroyed!" << std::endl;
}

Weapon      *HumanB::getWeapon(){
    return this->weapon;
}

void        HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

std::string HumanB::getName(){
    return this->name;
}

void        HumanB::setName(std::string name){
    this->name = name;
}

void        HumanB::attack(){
    std::cout << this->getName() << " attacks with their "
        << this->getWeapon()->getType() << std::endl;
}
