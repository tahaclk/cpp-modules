#pragma once
#include <iostream>

class Brain{
    private:
        std::string *ideas;
    public:
        Brain();
        Brain(Brain &copy);
        ~Brain();
        Brain & operator=(Brain const &arg);
        std::string * getIdeas();
};
