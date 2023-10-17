#pragma once
#include <iostream>

template<typename T>
class Array{
	public:
		Array(){
			len = 0;
			a = new T[0];
		}
		Array(unsigned int n){
			len = n;
			a = new T[len];
		}
		Array(const Array& copy){
			len = 0;
			a = new T[0];
			*this = copy;
		}
		~Array(){
			delete [] a;
		}
		Array& operator=(const Array& value){
			if (this != &value){
				delete [] this->a;
				this->len = value.len;
				this->a = new T[this->len];
				for (size_t i = 0; i < this->len; i++)
					this->a[i] = value.a[i];
			}
			return (*this);
		}
		T& operator[](size_t i){
			if (i >= len)
				throw std::exception();
			return (this->a[i]);
		}
		size_t size() const {
			return (this->len);
		}
	private:
		T *a;
		size_t len;
};
