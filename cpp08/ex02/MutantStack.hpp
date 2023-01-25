/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:44 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:44 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:

	MutantStack<T>()
	{
		//std::cout << "Default constructor called" << std::endl;
	}
	MutantStack<T>(const MutantStack<T> &src)
	{
		//std::cout << "Copy constructor called" << std::endl;
		*this = src;
	}
	~MutantStack<T>()
	{
		//std::cout << "Destructor called" << std::endl;
	}

	MutantStack<T>	&operator=(const MutantStack<T> &src)
	{
		(void) src;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin()
	{
		return (this->c.begin());
	}

	iterator	end()
	{
		return (this->c.end());
	}

private:
};


#endif //MUTANTSTACK_HPP
