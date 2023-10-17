#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap:public ScavTrap, public FragTrap{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &copy);
        virtual ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &src);
        void attack(const std::string &target);
        void whoAmI(void);
};
