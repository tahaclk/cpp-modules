#pragma once

#include "ScavTrap.hpp"
#include <iostream>

class FragTrap:public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &copy);
        virtual ~FragTrap();
        void highFivesGuys(void);
};
