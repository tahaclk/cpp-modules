#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap - Default constructor called for " << name << "." << std::endl;
}

FragTrap::FragTrap(std::string name){
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap - Called name constructor for " << name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "FragTrap - Copy constructor called for " << name << "." << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap - Called destructor for \"" << name << "\"" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "Give me a high five guys,  we will be legendary!! (♪♪Clap sounds♪♪)" << std::endl;
}
