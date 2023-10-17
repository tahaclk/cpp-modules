#pragma once

#include "ScavTrap.hpp"
#include <iostream>

class FragTrap:virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        virtual ~FragTrap();
        void highFivesGuys(void);
};
