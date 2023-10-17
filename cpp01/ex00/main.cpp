#include "Zombie.hpp"

int main(void) {
    Zombie nameless;
    nameless.announce();
    nameless.setName("Canitin");
    nameless.announce();
    Zombie *bob = newZombie("Karl");
    randomChump("Huseyin");
    delete bob;
    return (0);
}
