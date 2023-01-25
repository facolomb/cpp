/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:02 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:02 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T> class Array
{

public:

	Array() : _array(NULL), _size(0)
	{
		//std::cout << "Default constructor called" << std::endl;
	}
	Array(unsigned int n) : _size(n)
	{
		//std::cout << "Parameter constructor called" << std::endl;
		this->_array = new T[n];
	}
	Array(const Array<T> &src)
	{
		//std::cout << "Copy constructor called" << std::endl;
		*this = src;
	}
	~Array()
	{
		//std::cout << "Destructor called" << std::endl;
		if (this->_size > 0)
			delete [] this->_array;
	}
	Array<T>	&operator=(const Array<T> &src)
	{
		this->_size = src._size;
		this->_array = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
		return (*this);
	}
	T			&operator[](int index)
	{
		if (index >= this->_size || index < 0)
			throw std::overflow_error("Index overflow");
		return (this->_array[index]);
	}
	int size() const
	{
		return (_size);
	}
private:

	T	*_array;
	int _size;
};


#endif //ARRAY_HPP
