/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:16 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:16 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>

class noMatchFound : public std::exception
{
public:

	const char* what() const throw()
	{
		return ("No match found");
	}
};

template<typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	res = find(container.begin(), container.end(), toFind);

	if (res == container.end())
		throw noMatchFound();
	return (res);
}



#endif
