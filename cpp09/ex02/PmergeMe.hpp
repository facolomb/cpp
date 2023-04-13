
#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
public:

	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe &src);

	PmergeMe	&operator=(const PmergeMe &src);

	int		buildContainers(char **arg);
	void	doSort();

	void	displayVector();
private:

	std::vector<int>	_vector;
	std::deque<int>		_deque;

};

template<typename T>
void	merge(T &cont, int low, int mid, int high)
{
	int	i = low;
	int	j = mid + 1;
	int k = low;
	T	temp(high + 1);

	while (i <= mid && j <= high)
	{
		if (cont[i] < cont[j])
			temp[k] = cont[i++];
		else
			temp[k] = cont[j++];
		k++;
	}
	while (i <= mid)
		temp[k++] = cont[i++];
	while (j <= high)
		temp[k++] = cont[j++];
	for(int i = low; i <= high; i++)
		cont[i] = temp[i];
}

template<typename T>
void	mergeSort(T &cont, int low, int high)
{
	int mid;

	if (low < high)
	{
		mid = (low + high) / 2;
		mergeSort(cont, low, mid);
		mergeSort(cont, mid + 1, high);
		merge(cont, low, mid, high);
	}
}

#endif //PMERGEME_HPP
