/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:50:07 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:50:11 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(5, "Bertrand");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
}
