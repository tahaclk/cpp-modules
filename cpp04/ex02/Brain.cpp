#include "Brain.hpp"

Brain::Brain(){
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Idea";
    std::cout << "Brain - Default constructer called" << std::endl;
}

Brain::Brain(Brain &copy){
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.getIdeas()[i] + " stolen";
	std::cout << "Brain - Copy constracture called" << std::endl;
}

Brain::~Brain(){
    delete [] this->ideas;
    std::cout << "Brain - Destructer called" << std::endl;
}

Brain & Brain::operator=(Brain const &arg){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = arg.ideas[i];
    return *this;
}

std::string *Brain::getIdeas(){
    return ideas;
}
