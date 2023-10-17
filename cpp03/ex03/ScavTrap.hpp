#pragma once

#include<iostream>
#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
{
    private:
        bool guardingGate;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        virtual ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};

