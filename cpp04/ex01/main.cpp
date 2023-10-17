#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	std::cout << "\033[32m--------Constructers--------" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	std::cout << "\033[38;5;208m--------Destructers---------"<<std::endl;
	delete dog;
	delete cat;
	std::cout << "------------End-------------\033[0m" << std::endl;

	std::cout << "\033[31m" << std::endl;
	system("leaks Brain");
	std::cout << "\033[0m" << std::endl;

	std::cout << "\033[32m--------Constructers--------" << std::endl;
	Dog medor;
	Cat fifi;
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << "\033[36m------Copy Constructers-----" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);
	std::cout << "------------End-------------\033[0m\n" << std::endl;


	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << "\033[33m--------Comparing Dog-------" << std::endl;
	medor.compareTo(medor_copy_ref);
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	std::cout << "\033[33m--------Comparing Cat-------" << std::endl;
	fifi.compareTo(fifi_copy_ref);
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	const Animal	*(animal_array[4]);
	std::cout << "\033[32m---------Fill Dogs----------" << std::endl;
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	std::cout << "\033[32m---------Fill Cats----------" << std::endl;
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	std::cout << "\033[38;5;208m--------Destructers---------"<<std::endl;
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << "------------End-------------\033[0m\n" << std::endl;

	std::cout << "\033[31m" << std::endl;
	system("leaks Brain");
	std::cout << "\033[0m" << std::endl;

	std::cout << "\033[38;5;208m--------Destructers---------"<<std::endl;
}
