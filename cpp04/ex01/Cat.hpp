#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat:public Animal{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat			&operator=(Cat const & arg);
		std::string	getType() const;
		void		makeSound() const;
		Brain		*getBrain() const;
		void		compareTo(Cat const & other_cat) const;
};
