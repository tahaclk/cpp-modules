#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat - Constructer called" << std::endl;
}

Cat::~Cat(){
	delete brain;
	std::cout << "Cat - Destructer called" << std::endl;
}

Cat::Cat(const Cat &copy){
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "Cat - Copy constructer called" << std::endl;
}

Cat	&Cat::operator=(Cat const & arg)
{
	this->type = arg.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(arg.getBrain()));
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow meow bro" << std::endl;
}

std::string	Cat::getType() const {
	return type;
}

Brain		*Cat::getBrain() const{
	return brain;
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas" << std::endl;;
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
