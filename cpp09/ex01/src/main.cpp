#include "../inc/RPN.hpp"

int main(int argc, char **argv) {
	(void)argv;
	if (argc != 2) {
		std::cout << "Error: ./RPN [reverse polish calculus]" << std::endl;
		return 1;
	}
	RPN rpn;

	rpn.run(argv[1]);
	return 0;
}
