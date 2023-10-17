#pragma once
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal & copy);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(WrongAnimal const & rhs);
		std::string getType() const;
		void makeSound() const;
};
