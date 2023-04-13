#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange test(argv[1]);

		if (test.buildDB())
			test.calculation();
	}
	else
		std::cout << "Missing or too much arguments => ./btc inputFile" << std::endl;
	return (0);
}