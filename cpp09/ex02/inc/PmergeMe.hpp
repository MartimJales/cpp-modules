#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <vector>
#include <list>
#include <cstring>
#include <cstdlib>

class PmergeMe {
	public:
		//OCF
		PmergeMe(void);
		PmergeMe(PmergeMe const &src);
		~PmergeMe(void);
		PmergeMe &operator=(PmergeMe const &rhs);

		//Methods
		void run(int argc, char **argv);
		void showList(void);
		void showVector(void);
		void freeMemory(void);
		void copyData(PmergeMe const &src);
		void sortData(void);

		void mergeSortV(int left, int right);
		void mergeV(int left, int middle, int right);

		void mergeSortL(int left, int right);
		void mergeL(int left, int middle, int right);

		bool isSortedV(void);
		bool isSortedL(void);

	private:
		//Attributes
		std::vector<int> v;
		std::list<int> l;

		//Methods

};

#endif
