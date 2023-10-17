#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Wrong argument!" << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter::convert(av[1]);
	return (EXIT_SUCCESS);
}
