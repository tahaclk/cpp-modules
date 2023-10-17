#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (++i < ac)
    {
        j = 0;
        while (av[i][j])
            std::cout <<(char) std::toupper(av[i][j++]);
    }
    std::cout<< "\n";
}
