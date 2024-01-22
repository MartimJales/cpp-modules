#include <iostream>
#include "../inc/iter.hpp"

int main() {
    // Array INT
    int intArray[] = {1, 2, 3, 4, 5};
    int lengthInt = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original intArray: ";
    for (int i = 0; i < lengthInt; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

	std::cout << "===PROCESS===" << std::endl;

    iter(intArray, lengthInt, processElement<int>);

    std::cout << "Modified intArray: ";
    for (int i = 0; i < lengthInt; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl << std::endl;



    // Testing 'iter' with a double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int lengthDouble = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Original doubleArray: ";
    for (int i = 0; i < lengthDouble; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

	std::cout << "===PROCESS===" << std::endl;
    // Call 'iter' with the double array and the processElement function
    iter(doubleArray, lengthDouble, processElement<double>);

    std::cout << "Modified doubleArray: ";
    for (int i = 0; i < lengthDouble; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
