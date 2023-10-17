#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string name2);
        ~HumanB();
        Weapon      *getWeapon();
        void        setWeapon(Weapon &weapon);
        std::string getName();
        void        setName(std::string name);
        void        attack();
};

#endif
