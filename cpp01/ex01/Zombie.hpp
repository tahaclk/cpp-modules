#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
    private:
        std::string Name;
    public:
        Zombie();
        ~Zombie();
        void    setName( std::string name );
        std::string getName( void );
        void    announce( void );
};

Zombie*    zombieHorde( int N, std::string name );

#endif
