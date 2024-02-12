#include "../inc/PmergeMe.hpp"

int main(int argc, char **argv) {
	PmergeMe pmm;

	pmm.run(argc, argv);

	// std::cout << "VECTOR" << std::endl;
	pmm.showVector();
	// std::cout << "LIST" << std::endl;
	// pmm.showList();

	pmm.sortData();

	std::cout << "VECTOR" << std::endl;
	pmm.showVector();
	if (pmm.isSortedV()) {
		std::cout << "VECTOR IS SORTED" << std::endl;
	} else {
		std::cout << "VECTOR IS NOT SORTED" << std::endl;
	}

	std::cout << "LIST" << std::endl;
	pmm.showList();
	if (pmm.isSortedL()) {
		std::cout << "LIST IS SORTED" << std::endl;
	} else {
		std::cout << "LIST IS NOT SORTED" << std::endl;
	}
	return 0;
}
