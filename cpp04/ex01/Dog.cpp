#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog - Constructer called" << std::endl;
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog - Destructer called" << std::endl;
}

Dog::Dog(const Dog &copy){
	this->type = copy.getType();
	this->brain = new Brain;
	*(this->brain) = *(copy.getBrain());
	std::cout << "Dog - Copy Constructer called" << std::endl;
}

Dog	&Dog::operator=(Dog const & arg)
{
	this->type = arg.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain;
	this->brain = arg.getBrain();
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Haw Haw bro" << std::endl;
}

std::string	Dog::getType() const {
	return this->type;
}

Brain	*Dog::getBrain() const {
	return brain;
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
