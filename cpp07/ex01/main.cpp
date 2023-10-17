#include "iter.hpp"

template<typename T>
void	print(T &value){
	std::cout << value << " ";
}

template<typename T>
void	func(T& value){
	value++;
}

int main(){
	{
		int a[5] = {1,2,3,4,5};
		std::cout << "\033[32mArr: ";
		for (int i = 0; i < 5; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		::iter(a, 5, &func);
		std::cout << "New Arr: ";
		::iter(a, 5, &print);
		std::cout << std::endl;
	}
	{
		char a[5] = {'m','e','t','i','n'};
		std::cout << "\033[33mArr: ";
		for (int i = 0; i < 5; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		::iter(a, 5, &func);
		std::cout << "New Arr: ";
		::iter(a, 5, &print);
		std::cout << std::endl;
	}
	{
		double a[5] = {38.5, 39.5, 40.5, 41.5, 42.5};
		std::cout << "\033[36mArr: ";
		for (int i = 0; i < 5; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		::iter(a, 5, &func);
		std::cout << "New Arr: ";
		::iter(a, 5, &print);
		std::cout << std::endl << "\033[0m";
	}
}
