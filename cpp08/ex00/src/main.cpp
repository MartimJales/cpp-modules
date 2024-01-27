#include "../inc/EasyFind.hpp"

int main() {
    int arr[] = {1, 2, 3, 14, 6, 12, 7, 42, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int	numToFind = 42;

	// Vector
	std::cout << "VECTOR" << std::endl;
    std::vector<int> vec(arr, arr + size);
	try {
		std::vector<int>::iterator it = easyfind(vec, numToFind);
		std::cout << "I found the number " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "I did not find " << numToFind << std::endl;
	}

	// List
	std::cout << "LIST" << std::endl;
	numToFind = 43;
	std::list<int> lst(arr, arr + sizeof(arr) / sizeof(arr[0]));
	try {
		std::list<int>::iterator it = easyfind(lst, numToFind);
		std::cout << "I found the number " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "I did not find " << numToFind << std::endl;
	}
    return 0;
}
