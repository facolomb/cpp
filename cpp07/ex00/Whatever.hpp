/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:39:43 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:39:43 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
const T	min(const T &a, const T &b)
{
	return (a<b ? a : b);
}

template<typename T>
const T	max(const T &a, const T &b)
{
	return (a>b ? a : b);
}


#endif //WHATEVER_HPP
