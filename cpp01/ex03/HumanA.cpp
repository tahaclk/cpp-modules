#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name2, Weapon &weapon2): name(name2), weapon(weapon2){
    std::cout << "HumanA " << name2 << " is created  with " << weapon2.getType() << std::endl;
}

HumanA::~HumanA(){
    std::cout << "HumanA " << this->getName() << " is destroyed!" << std::endl;
}

Weapon      HumanA::getWeapon(){
    return this->weapon;
}

void        HumanA::setWeapon(Weapon weapon){
    this->weapon = weapon;
}

std::string HumanA::getName(){
    return this->name;
}

void        HumanA::setName(std::string name){
    this->name = name;
}

void        HumanA::attack(){
    std::cout << this->getName() << " attacks with their "
        << this->getWeapon().getType() << std::endl;
}
