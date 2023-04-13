#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN test;

		test.doRPN(argv[1]);
	}
	return (0);
}