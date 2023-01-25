/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:19 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:19 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	vect;
	std::vector<int>::iterator	itv;

	for(int i = 0; i < 42; i++)
		vect.push_back(i);
	try
	{
		itv = easyfind(vect, 10);
		std::cout << "iterator: " << *itv << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		itv = easyfind(vect, 50);
		std::cout << "iterator: " << *itv << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
