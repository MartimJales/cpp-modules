#include "../inc/BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: ./btc [file]" << std::endl;
		return 1;
	}
	BitcoinExchange exchange;

	if (!exchange.loadData("data/data.csv"))
		return 1;
	// exchange.showData();

	exchange.run(argv[1]);

	return 0;
}
