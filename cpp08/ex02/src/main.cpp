#include "../inc/MutantStack.hpp"

int main()
{
	std::cout << "Create an Empty MutantStack:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(0);
	mstack.push(737);
	std::cout << "Top: " << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "Size: " << std::	endl;
	std::cout << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "Lets's iterate: " <<std::endl;
	while (it != mstack.end())
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "Copy constructor: " << std::endl;
	MutantStack<int> mstack2(mstack);
	std::cout << "Top: " << std::endl;
	std::cout << mstack2.top() << std::endl;
	std::cout << "Size: " << std::	endl;
	std::cout << mstack2.size() << std::endl;
	// std::stack<int> s(mstack);
	return 0;
}

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }
