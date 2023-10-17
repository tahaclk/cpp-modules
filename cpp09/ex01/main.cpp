#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Usage: ./RPN \"<reverseNolishNotation>\"" << std::endl;
		return (EXIT_FAILURE);
	}
	std::stack<int> stck;
	calcRPN(stck, av[1]);
	if (stck.size() == 1)
		std::cout << stck.top() << std::endl;
	else
		std::cerr << "Error" << std::endl;
	clearStack(stck);
	return (EXIT_SUCCESS);
}
