#include "Harl.hpp"

Harl::Harl(){
    std::cout << "Harl created." << std::endl;
}

Harl::~Harl(){
    std::cout << "Harl destroyed." << std::endl;
}

void    Harl::debug(void){
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my"
    << " 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
    << std::endl;
}

void    Harl::info(void){
    std::cout << "[INFO]" << std::endl;

    std::cout << "I cannot believe adding extra bacon costs more money.\n"
    << "You didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!"
    << std::endl;
}

void    Harl::warning(void){
    std::cout << "[WARNING]" << std::endl;

    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for"
    << " years whereas you started working here since last month."
    << std::endl;
}

void    Harl::error(void){
    std::cout << "[ERROR]" << std::endl;

    std::cout << "This is unacceptable!\nI want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){
    void    (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    int i;

    for(i = 0; (i < 4 && level.compare(levels[i])); i++);

    if (i < 4)
        (this->*f[i])();
}
