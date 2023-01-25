/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:52:24 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:52:24 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("CL4P-TP");

	for(int i = 0; i < 10; i++)
	{
		a.attack("Le Beau Jack");
		a.takeDamage(5);
		a.beRepaired(4);
		if (a.get_life() == 0)
			break;
		std::cout << "---- new turn ----" << std::endl;
	}
	std::cout << a.get_name() << " is sadly dead, rest in peace" << std::endl;
	return (0);
}