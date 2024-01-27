#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		virtual ~MutantStack();

		MutantStack &operator=(MutantStack const &other);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		
	private:

};

#include "MutantStack.tpp"

#endif
