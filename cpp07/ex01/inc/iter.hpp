#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *array, int length, void (*f)(T &)) {
	for (int i = 0; i < length; ++i) {
		f(array[i]);
	}
	std::cout << std::endl;
}

template <typename T>
void iter(T *array, int length, void (*f)(T const &)) {
	for (int i = 0; i < length; ++i) {
		f(array[i]);
	}
	std::cout << std::endl;
}

template <typename T>
void processElement(T &element) {
	element += 1;
	// std::cout << element + 1 << ' ';
}

#endif
