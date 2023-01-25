/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:39:51 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:39:51 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void	iter(T *array, int size, void (*fonct)(const T &))
{
	for(int i = 0; i < size; i++)
		fonct(array[i]);
}

template<typename T>
void	display(T whatever)
{
	std::cout << "Array content : " << whatever << std::endl;
}
#endif
