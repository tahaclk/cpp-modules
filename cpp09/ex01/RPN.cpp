#include "RPN.hpp"

void	clearStack(std::stack<int>& stck){
	for (;stck.size() > 0;)
		stck.pop();
}

void	calcValue(std::stack<int>& stck, char symbol){
	int tmp = 0;
	if (stck.size() < 2){
		std::cerr << "Error" << std::endl;
		clearStack(stck);
		exit(EXIT_FAILURE);
	}
	switch (symbol){
		case '+':
			tmp = stck.top();
			stck.pop();
			tmp = stck.top() + tmp;
			stck.pop();
			stck.push(tmp);
			break;
		case '-':
			tmp = stck.top();
			stck.pop();
			tmp = stck.top() - tmp;
			stck.pop();
			stck.push(tmp);
			break;
		case '/':
			try{
				tmp = stck.top();
				stck.pop();
				tmp = stck.top() / tmp;
				stck.pop();
				stck.push(tmp);
			}catch (std::exception& ex){
				std::cerr << ex.what() << std::endl;
				clearStack(stck);
				exit(EXIT_FAILURE);
			}
			break;
		case '*':
			tmp = stck.top();
			stck.pop();
			tmp = stck.top() * tmp;
			stck.pop();
			stck.push(tmp);
			break;
	}
}

void calcRPN(std::stack<int>& stck, std::string rpn){
	std::string symbols = "+-/*";
	for (size_t i = 0; i < rpn.length(); i++){
		if (std::isspace(rpn[i]))
			continue ;
		else if (std::isdigit(rpn[i]))
			stck.push(rpn[i] - '0');
		else if (symbols.find(rpn[i]) != std::string::npos)
			calcValue(stck, rpn[i]);
		else{
			std::cerr << "Error" << std::endl;
			clearStack(stck);
			exit(EXIT_FAILURE);
		}
	}
}
