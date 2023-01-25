/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:34 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:34 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <exception>

class Span
{
public:

	Span();
	Span(int n);
	Span(const Span &src);
	~Span();

	Span	&operator=(const Span &src);

	void	addNumber(int nb);
	void	addALot(int *array, int size);
	int 	shortestSpan();
	int 	longestSpan();

	class maxNumberStore : public std::exception
	{
	public:

		virtual const char* what() const throw();
	};

	class vectorMissingNb : public std::exception
	{
	public:

		virtual const char* what() const throw();
	};
private:

	unsigned int		_n;
	std::vector<int>	_vect;
};


#endif //SPAN_HPP
