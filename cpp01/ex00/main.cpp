/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:49:16 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:49:19 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie Patrick("Patrick");
	Patrick.announce();

	Zombie *Gerard = newZombie("Gerard");
	Gerard->announce();
	delete Gerard;

	randomChump("Christelle");
}
