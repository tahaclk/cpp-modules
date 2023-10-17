#include "Dog.hpp"
#include "Cat.hpp"

void test_animal_copy(void)
{
	std::cout << "\n\t=== Testing a copy of an animal ===\n" << std::endl;

	Dog *dog = new Dog();
	Dog *copy = dog;

	std::cout << copy->getType() << std::endl;
	copy->makeSound();

	delete dog;
}

void test_inheritance(void)
{
	std::cout << "\n\t=== Testing new animals sounds ===\n" << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
}

int main()
{
	// With the line bellow uncommented it will give a compilation error
	// AAnimal test;
	test_inheritance();
	test_animal_copy();
}
