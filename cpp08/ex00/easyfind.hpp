#pragma once
#include <iostream>
#include <vector>
#include <list>

class NotFoundException: public std::exception{
	public:
		virtual	const char* what() const throw(){
			return ("Value not found in container!");
		}
};

template<typename T>
void	easyfind(T& container, int value){
	if (std::find(container.begin(), container.end(), value) != container.end())
		std::cout << "Value: " << value << " founded in container!" << std::endl;
	else
		throw NotFoundException();
}
