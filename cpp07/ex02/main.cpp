#include "Array.hpp"
#define SIZE 42
int main(){
	Array <int>arr(SIZE);
	for (size_t i = 0; i < arr.size(); i++)
		arr[i] = i;
	arr[10] = 42;
	Array <int>arr2(arr);

	std::cout << "Size: " <<  arr.size()<< std::endl;
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::cout << "ARR2 size:" << arr2.size() << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;
}
