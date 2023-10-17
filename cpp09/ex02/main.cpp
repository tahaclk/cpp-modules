#include "PmergeMe.hpp"

int main(int ac, char **av){
	PmergeMe	merger;
	if (ac < 2 || merger.checkNums(ac, av)){
		std::cerr << "Error" << std::endl;
		return (EXIT_FAILURE);
	}
	std::vector<int> list1;
	std::list<int> list2;
	merger.fillContainers(list1, list2, ac, av);
	merger.printContainers("Before", list1);
	merger.mergeInsertSort(list1, 5);
	merger.mergeInsertSort(list2, 5);
	merger.printContainers("After", list2);
	merger.printTime(list1);
	merger.printTime(list2);
}
