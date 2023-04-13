
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		PmergeMe test;

		if (test.buildContainers(argv))
			test.doSort();
	}
	else
		std::cout << "Error arguments" << std::endl;
	return (0);
}