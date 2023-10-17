#include "Span.hpp"

Span::Span(unsigned int N){
	this->maxSize = N;
}

Span::~Span(){
	this->_values.clear();
}

Span::Span(const Span& copy){
	*this = copy;
}

Span& Span::operator=(const Span& value){
	this->_values = value._values;
	return (*this);
}

unsigned int Span::shortestSpan(){
	unsigned int range = UINT_MAX;
	if (this->_values.size() < 2)
		throw NeedMoreNumber();
	std::vector<int> copy = this->_values;
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size() - 1; i++)
		if (static_cast<unsigned int>(abs(copy[i] - copy[i + 1])) < range)
			range = abs(copy[i] - copy[i + 1]);
	return (range);
}

unsigned int Span::longestSpan(){
	if (this->_values.size() < 2)
		throw NeedMoreNumber();
	std::vector<int> copy = this->_values;
	std::sort(copy.begin(), copy.end());
	return (copy[copy.size() - 1] - copy[0]);
}

//SET
void	Span::addNumber(int number){
	if (this->_values.size() >= this->maxSize)
		throw SpanIsFull();
	this->_values.push_back(number);
}

void	Span::addNumberMachine(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (begin > end)
		return ;
	while (begin != end){
		if (this->_values.size() < this->maxSize)
			this->_values.push_back(*begin);
		else
			throw SpanIsFull();
		begin++;
	}
}
