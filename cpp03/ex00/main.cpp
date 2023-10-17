#include "ClapTrap.hpp"

int main()
{
    ClapTrap test;
    ClapTrap taha("Taha");
    ClapTrap yusuf("yusuf");
    taha.attack("KRAKEN");
    taha.takeDamage(8);
    taha.beRepaired(30);
    taha.beRepaired(20);
    taha.attack("KRAKEN");
    taha.attack("KRAKEN");
    taha.attack("KRAKEN");
    taha.attack("KRAKEN");
    taha.takeDamage(40);
    test.attack("KRAKEN");
    yusuf.attack("KRAKEN");
    yusuf.attack("KRAKEN");
    taha.beRepaired(120);
    taha.attack("LEGENDARY KRAKEN");
    taha.attack("LEGENDARY KRAKEN");
    taha.attack("LEGENDARY KRAKEN");
    taha.attack("LEGENDARY KRAKEN");
    taha.beRepaired(120);
    yusuf.takeDamage(20000);
    yusuf.takeDamage(20000);
    yusuf.takeDamage(20000);
    yusuf.takeDamage(20000);
    yusuf.takeDamage(20000);
    yusuf.beRepaired(100);
}
