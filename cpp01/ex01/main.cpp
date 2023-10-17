#include "Zombie.hpp"

int main(void) {
    int N = 10;
    Zombie *army = zombieHorde(N, "TAHA");
    for (int i = 0; i < N; i++){
        army[i].announce();
    }
    delete [] army;
    return (0);
}
