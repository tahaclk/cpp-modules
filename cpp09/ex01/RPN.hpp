#pragma once
#include <iostream>
#include <stack>

void	clearStack(std::stack<int>& stck);
void	calcValue(std::stack<int>& stck, char symbol);
void	calcRPN(std::stack<int>& stck, std::string rpn);
