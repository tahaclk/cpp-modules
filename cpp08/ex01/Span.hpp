#pragma once
#include <iostream>
#include <vector>

class Span{
	private:
		std::vector<int>	_values;
		size_t				maxSize;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& value);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addNumber(int number);
		void	addNumberMachine(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	private:
		class SpanIsFull: public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Span is Full!");
				}
		};
		class NeedMoreNumber: public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Container need to minimum 2 number for shortestSpan/longestSpan!");
				}
		};
};
