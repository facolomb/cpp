/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:38:03 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:38:03 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data *ptr = new Data;
	Data *newptr;
	uintptr_t raw;

	ptr->data = "This is a test";
	std::cout << "ptr->data : " << ptr->data << std::endl;
	raw = serialize(ptr);
	newptr = deserialize(raw);
	std::cout << "newptr->data : " << newptr->data << std::endl;
	return (0);
}
