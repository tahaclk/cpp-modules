#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("NULL"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap - Called default constructor." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy): name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage){
    std::cout << "ClapTrap - Called copy constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap - Called name constructor for " << name << "." << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap - Called destructor for \"" << name << "\"" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage! (" << energyPoints << " energy points left)" << std::endl;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any energy points left. (attack)" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any hit points left. (attack)" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (hitPoints > amount)
    {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " took " << amount << " damage. (" << hitPoints << " hit points left)" << std::endl;
    }
    else if (hitPoints > 0)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " took " << amount << " damage and dead. (" << hitPoints << " hit points left)" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " is already dead. Why do you keep hitting?" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energyPoints > 0 && hitPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " has restored " << amount << " health. (New hit points " << hitPoints << " and " << energyPoints << " energy points left)" << std::endl;
    }
    else if (hitPoints > 0)
    {
        std::cout << "ClapTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any energy points left. (repair)" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any hit points left. (repair)" << std::endl;
    }
}
