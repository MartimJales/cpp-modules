#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <cstring>
#include <sstream>

class RPN {
	public:
		//OCF
		RPN(void);
		RPN(RPN const &src);
		~RPN(void);
		RPN &operator=(RPN const &rhs);

		//Methods
		void run(std::string const &str);
		int makeCalculus(std::string const &token);

	private:
		//Attributes
		std::stack<std::string> _data;

		//Methods

};

#endif
