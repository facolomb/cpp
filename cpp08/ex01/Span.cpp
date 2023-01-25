/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:30 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:30 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

Span::Span()
{
	//std::cout << "Default constructor called" << std::endl;
}

Span::Span(int n) : _n(n)
{
	//std::cout << "Parameter constructor called" << std::endl;
}

Span::Span(const Span &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Span::~Span()
{
	//std::cout << "Destructor called" << std::endl;
}

Span &Span::operator=(const Span &src)
{
	this->_n = src._n;
	this->_vect = src._vect;
	return (*this);
}

void Span::addNumber(int nb)
{
	if (this->_vect.size() == this->_n)
		throw maxNumberStore();
	this->_vect.push_back(nb);
}

void Span::addALot(int *array, int size)
{
	if (size + this->_vect.size() > this->_n)
		throw maxNumberStore();
	std::vector<int> more(array, array + size);
	this->_vect.insert(this->_vect.end(), more.begin(), more.end());
}

int Span::shortestSpan()
{
	int diff;
	int shortest = 2147483647;

	if (this->_vect.size() <= 1)
		throw vectorMissingNb();
	for(int i = 0; i < this->_vect.size(); i++)
	{
		for(int j = i + 1; j < this->_vect.size(); j++)
		{
			diff = abs(this->_vect[i] - this->_vect[j]);
			if (diff < shortest)
				shortest = diff;
		}
	}
	return (shortest);
}

int Span::longestSpan()
{
	int diff;
	int longest = -2147483648;

	if (this->_vect.size() <= 1)
		throw vectorMissingNb();
	for(int i = 0; i < this->_vect.size(); i++)
	{
		for(int j = i + 1; j < this->_vect.size(); j++)
		{
			diff = abs(this->_vect[i] - this->_vect[j]);
			if (diff > longest)
				longest = diff;
		}
	}
	return (longest);
}

const char *Span::maxNumberStore::what() const throw()
{
	return ("Too much number to add");
}

const char *Span::vectorMissingNb::what() const throw()
{
	return ("Missing number, enter a least 2 numbers");
}