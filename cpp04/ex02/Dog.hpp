#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog:public AAnimal{
	private:
		std::string type;
		Brain		*brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog			&operator=(Dog const & arg);
		std::string	getType() const;
		void		makeSound() const;
		Brain		*getBrain() const;
		void		compareTo(Dog const & other_dog) const;
};
