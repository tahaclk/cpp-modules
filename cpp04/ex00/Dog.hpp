#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog:public Animal{
	private:
		std::string type;
	public:
		Dog();
		Dog(Dog &copy);
		~Dog();
		Dog & operator=(Dog const & rhs);
		std::string getType() const;
		void makeSound() const;
};
