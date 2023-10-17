#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guardingGate = false;
    std::cout << "ScavTrap - Default constructor called for " << name << "." << std::endl;
}
ScavTrap::ScavTrap(std::string name){
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guardingGate = false;
    std::cout << "ScavTrap - Called name constructor for " << name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    this->guardingGate = copy.guardingGate;
    std::cout << "ScavTrap - Copy constructor called for " << name << "." << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap - Called destructor for \"" << name << "\"" << std::endl;
}

void ScavTrap::guardGate(){
    if (guardingGate == false){
        guardingGate = true;
        std::cout << "ScavTrap " << name << " is now guarding the gate." << std::endl;
    }
    else{
        std::cout << "ScavTrap " << name << " is already guarding the gate." << std::endl;
    }
}

void ScavTrap::attack(const std::string& target){
    if (hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage! (" << energyPoints << " energy points left)" << std::endl;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any energy points left. (attack)" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any hit points left. (attack)" << std::endl;
    }
}
