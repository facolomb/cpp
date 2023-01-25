/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:53:36 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:53:36 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap : Constructor called" << std::endl;
	this->_name = name;
	this->_life = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap : Copy assignment operator called" << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_life > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
				  << ", causing " << this->_damage << " points of damage!"
				  << std::endl;
		this->_energy--;
	}
	else
	{
		if (this->_life == 0)
			std::cout << "FragTrap " << this->_name << " can't attack, is dead" << std::endl;
		else
			std::cout << "FragTrap " << this->_name << " can't attack, not enough energy" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	if (this->_life > 0)
		std::cout << "FragTrap " << this->_name << " want a High Five !!" << std::endl;
	else
		std::cout << "FragTrap" << this->_name << " can't get a High Five, is dead" << std::endl;
}
