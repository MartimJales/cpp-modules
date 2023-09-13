#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for (size_t j = 0; j < str.size(); j++)
		{
			char c = str[j];
    		std::cout << (char)toupper(c);
		}
		std::cout << ' ';
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}

