#include "easyfind.hpp"

int main(void){
	std::vector<int> vc;
	vc.push_back(42);
	vc.push_back(34);
	vc.push_back(67);
	std::list<int> lst;
	lst.push_back(15);
	lst.push_back(25);
	lst.push_back(35);
	try{
		easyfind(vc, 32);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		easyfind(vc, 67);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		easyfind(lst, 15);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		easyfind(vc, 145);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
