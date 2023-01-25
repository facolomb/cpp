/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:09:39 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:09:39 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	*list[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			list[i] = new Dog();
		else if (i < 100)
			list[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		delete list[i];
	return 0;
}
