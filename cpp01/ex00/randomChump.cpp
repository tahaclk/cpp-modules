#include "Zombie.hpp"

void    randomChump( std::string name ){
    Zombie unknown;

    unknown.setName(name);
    unknown.announce();
}
