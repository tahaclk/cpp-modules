#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string name2, Weapon &weapon2);
        ~HumanA();
        Weapon      getWeapon();
        void        setWeapon(Weapon weapon);
        std::string getName();
        void        setName(std::string name);
        void        attack();
};

#endif
