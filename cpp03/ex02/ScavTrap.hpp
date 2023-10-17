#pragma once

#include<iostream>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    private:
        bool guardingGate;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &copy);
        virtual ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};
