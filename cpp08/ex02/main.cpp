/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:41 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:41 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"
#include <list>

int	main(void)
{
	std::cout << "---- Test with stack ----" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator its = mstack.begin();
	MutantStack<int>::iterator itse = mstack.end();
	++its;
	--its;
	std::cout << "Stack content : " << std::endl;
	while (its != itse)
	{
		std::cout << *its << std::endl;
		++its;
	}

	std::cout << "---- Test with list ----" << std::endl;
	std::list<int>	mlist;
	mlist.push_front(5);
	mlist.push_front(17);
	std::cout << "Top element : " << mlist.front() << std::endl;
	mlist.pop_front();
	std::cout << "Stack size : " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator itl = mlist.begin();
	std::list<int>::iterator itle = mlist.end();
	++itl;
	--itl;
	std::cout << "List content : " << std::endl;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	return 0;
}
