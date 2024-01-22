
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void iter(T *array, int length, void (*f)(T &)) {
	for (int i = 0; i < length; ++i) {
		f(array[i]);
	}
}

template <typename T>
void iter(T *array, int length, void (*f)(T const &)) {
	for (int i = 0; i < length; ++i) {
		f(array[i]);
	}
}

template <typename T>
void processElement(T &element) {
	element += 1;
}

#endif
