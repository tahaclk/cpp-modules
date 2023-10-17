#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl a;
    int i = 0;
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    switch(ac){
        case 2:
            break;
        default:
            return (1);
            break;
    }

    for(i = 0; (i < 4 && std::string(av[1]).compare(levels[i])); i++);
    switch (i)
    {
        case 0:
            a.complain("DEBUG");
        case 1:
            a.complain("INFO");
        case 2:
            a.complain("WARNING");
        case 3:
            a.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return (0);
}
