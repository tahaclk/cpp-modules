#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat:public AAnimal{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat			&operator=(Cat const & arg);
		std::string	getType() const;
		Brain		*getBrain() const;
		void		makeSound() const;
		void		compareTo(Cat const & other_cat) const;
};
