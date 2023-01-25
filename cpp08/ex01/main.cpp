/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:27 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:27 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10);
		int array[5] = {514, 42, 153, 18, 84};
		Span empty = Span(0);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addALot(array, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << empty.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}
