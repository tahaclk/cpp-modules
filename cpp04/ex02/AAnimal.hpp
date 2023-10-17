#pragma once
#include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(AAnimal & copy);
		virtual ~AAnimal() = 0;
		AAnimal & operator=(AAnimal const & rhs);
		virtual std::string getType() const;
		virtual void makeSound() const = 0;
};
