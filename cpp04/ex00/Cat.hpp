#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat:public Animal{
	private:
		std::string type;
	public:
		Cat();
		Cat(Cat &copy);
		~Cat();
		Cat & operator=(Cat const & rhs);
		std::string getType() const;
		void makeSound() const;
};
