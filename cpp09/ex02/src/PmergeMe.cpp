#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {
	freeMemory();
}

// Construtor de Cópia
PmergeMe::PmergeMe(const PmergeMe &src) {
	copyData(src);
}

// Operador de Atribuição
PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	if (this != &rhs) {
		freeMemory();
		copyData(rhs);
	}
	return *this;
}

void PmergeMe::run(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		// char *str = new char[strlen(argv[i]) + 1];
		// char *str2 = new char[strlen(argv[i]) + 1];
		// strcpy(str, argv[i]);
		v.push_back(std::atoi(argv[i]));
		// strcpy(str2, argv[i]);
		l.push_back(std::atoi(argv[i]));
	}
}

void PmergeMe::showList() {
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
		std::cout << *it << std::endl;
	}
}

void PmergeMe::showVector() {
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << std::endl;
	}
}

void PmergeMe::freeMemory() {
	// for (size_t i = 0; i < v.size(); i++) {
	// 	delete[] v[i];
	// }
	v.clear();

	// for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
	// 	delete[] *it;
	// }
	l.clear();
}

void PmergeMe::copyData(const PmergeMe &src) {
	v = src.v;
	l = src.l;
}

void PmergeMe::sortData() {
	int vSize = v.size();
	int lSize = l.size();
	mergeSortV(0, vSize - 1);
	mergeSortL(0, lSize - 1);
}

void PmergeMe::mergeSortV(int left, int right) {
	if (left < right) {
		int middle = left + (right - left) / 2;
		mergeSortV(left, middle);
		mergeSortV(middle + 1, right);
		mergeV(left, middle, right);
	}
}

void PmergeMe::mergeV(int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> leftArr(n1);
	std::vector<int> rightArr(n2);

	for (int i = 0; i < n1; i++)
		leftArr[i] = v[left + i];
	for (int j = 0; j < n2; j++)
		rightArr[j] = v[mid + 1 + j];

	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2) {
		if (leftArr[i] <= rightArr[j]){
			v[k] = leftArr[i];
			i++;
		} else {
			v[k] = rightArr[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of leftArr[], if there are any
	while (i < n1) {
		v[k] = leftArr[i];
		i++;
		k++;
	}
	// Copy the remaining elements of rightArr[], if there are any
	while (j < n2) {
		v[k] = rightArr[j];
		j++;
		k++;
	}
}

bool comparator(int first, int second)
{
	return first < second;
}

void PmergeMe::mergeSortL(int left, int right) {
	(void)left;
	(void)right;
	//l.merge(list2, comparator);

	if (left < right) {
	    int middle = left + (right - left) / 2;
	    mergeSortL(left, middle);
	    mergeSortL(middle + 1, right);
	    mergeL(left, middle, right);
	}
}

void PmergeMe::mergeL(int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	// Create temporary lists
	std::list<int> leftArr;
	std::list<int> rightArr;

	// Copy data to temporary lists leftArr[] and rightArr[]
	std::list<int>::iterator it = l.begin();
	std::advance(it, left);
	for (int i = 0; i < n1; i++) {
		leftArr.push_back(*it);
		it++;
	}
	for (int j = 0; j < n2; j++) {
		rightArr.push_back(*it);
		it++;
	}

	// Merge the temporary lists back into l[left..right]
	rightArr.merge(leftArr, comparator);

	//Create an auxiliar list to store the elements
	std::list<int> aux;
	std::list<int>::iterator it2 = l.begin();
	// Copy all the leemnts of it2 to aux until left
	for (int i = 0; i < left; i++) {
		aux.push_back(*it2);
		it2++;
	}
	// Copy all the elements of rightArr to aux
	for (std::list<int>::iterator it = rightArr.begin(); it != rightArr.end(); ++it) {
		aux.push_back(*it);
		it2++;
	}
	// Copy all the elements of it2 to aux until the end
	for (; it2 != l.end(); it2++) {
		aux.push_back(*it2);
	}
	l = aux;
}

bool PmergeMe::isSortedV() {
	for (size_t i = 0; i < v.size() - 1; i++) {
		if (v[i] > v[i + 1]) {
			return false;
		}
	}
	return true;
}

bool PmergeMe::isSortedL() {
	std::list<int>::iterator it = l.begin();
	std::list<int>::iterator it2 = l.begin();
	it2++;
	for (; it2 != l.end(); it++, it2++) {
		if (*it > *it2) {
			return false;
		}
	}
	return true;
}
