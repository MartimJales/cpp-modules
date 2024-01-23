template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _array(NULL), _size(0) {
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this == &other) return *this;
	delete [] _array;
	_array = new T[other._size];
	_size = other._size;
	for (unsigned int i = 0; i < _size; i++) _array[i] = other._array[i];
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {
	if (i >= _size) throw Array::InvalidIndexException();
	return _array[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const {
	if (i >= _size) throw Array::InvalidIndexException();
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
const char* Array<T>::InvalidIndexException::what() const throw() {
	return "Invalid index";
}
