#include "../inc/EasyFind.hpp"

int main() {
    int arr[] = {1, 2, 3, 4, 5};

	// Vector
	std::cout << "VECTOR" << std::endl;
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	try {
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Primeira ocorrência de 3 em vector: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "não encontrado no vector" << std::endl;
	}

	// List
	std::cout << "LIST" << std::endl;
	std::list<int> lst(arr, arr + sizeof(arr) / sizeof(arr[0]));
	try {
		std::list<int>::iterator it = easyfind(lst, 3);
		std::cout << "Primeira ocorrência de 3 em list: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "não encontrado na list" << std::endl;
	}

    return 0;
}
