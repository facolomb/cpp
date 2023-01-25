/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:51:09 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:51:15 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon()
{}

HumanB::~HumanB()
{}

void	HumanB::attack() const
{
	if (!this->_weapon)
		std::cout << this->_name << " can't attack cause he don't have a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->_weapon = &weapon;
}
