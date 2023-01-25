/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:53:46 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:53:46 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("CL4P-TP");
	ScavTrap b("Pathfinder");
	FragTrap c("R2D2");

	for(int i = 0; i < 10; i++)
	{
		a.attack("Le Beau Jack");
		a.takeDamage(5);
		a.beRepaired(4);
		if (a.get_life() == 0)
		{
			std::cout << a.get_name() << " is sadly dead, rest in peace" << std::endl;
			break;
		}
		std::cout << "---- new turn ----" << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		b.attack("Caustic");
		b.takeDamage(25);
		b.guardGate();
		if (b.get_life() == 0)
		{
			std::cout << b.get_name() << " is sadly dead, rest in peace" << std::endl;
			break;
		}
		std::cout << "---- new turn ----" << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		c.attack("Palpatine");
		c.takeDamage(25);
		c.highFivesGuys();
		if (c.get_life() == 0)
		{
			std::cout << c.get_name() << " is sadly dead, rest in peace" << std::endl;
			break;
		}
		std::cout << "---- new turn ----" << std::endl;
	}
	return (0);
}
