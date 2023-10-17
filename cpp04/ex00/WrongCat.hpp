#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat:public WrongAnimal{
	private:
		std::string type;
	public:
		WrongCat();
		WrongCat(WrongCat &copy);
		~WrongCat();
		WrongCat & operator=(WrongCat const & arg);
		std::string getType() const;
		void makeSound() const;
};
