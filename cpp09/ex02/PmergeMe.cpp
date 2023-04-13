
#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	if (this != &src)
	{
		this->_vector = src._vector;
		this->_deque = src._deque;
	}
	return (*this);
}

void PmergeMe::displayVector()
{
	for (std::vector<int>::iterator i = _vector.begin(); i != _vector.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}

int PmergeMe::buildContainers(char **arg)
{
	int nb;
	int i = 1;

	while (arg[i])
	{
		nb = atoi(arg[i]);
		if (nb < 0 || nb > INT_MAX)
		{
			std::cout << "Error : invalid number" << std::endl;
			return (0);
		}
		_vector.push_back(nb);
		_deque.push_back(nb);
		i++;
	}
	return (1);
}

void PmergeMe::doSort()
{
	std::clock_t start, end;
	double vTime, dTime;
	std::cout << "Before : ";
	displayVector();

	start = clock();
	mergeSort(_vector, 0, _vector.size() - 1);
	end = clock();
	vTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	start = clock();
	mergeSort(_deque, 0, _deque.size() - 1);
	end = clock();
	dTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	std::cout << "After : ";
	displayVector();
	std::cout << "Time to process a range of " << _vector.size() << " with std::vector : " << vTime << std::endl;
	std::cout << "Time to process a range of " << _deque.size() << " with std::deque : " << dTime << std::endl;
}