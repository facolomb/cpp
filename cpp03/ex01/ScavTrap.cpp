/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:53:09 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:53:09 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap : Constructor called" << std::endl;
	this->_name = name;
	this->_life = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->_energy > 0 && this->_life > 0)
	{
		std::cout << "ScavTrap " << this->_name << " Gate Keeper mod ACTIVATED"
				  << std::endl;
		this->_energy--;
	}
	else
	{
		if (this->_life == 0)
			std::cout << "ScavTrap " << this->_name << " can't use Gate Keeper mode, is dead" << std::endl;
		else
			std::cout << "ScavTrap " << this->_name << " can't use Gate Keeper mode, not enough energy" << std::endl;
	}
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_life > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
				  << ", causing " << this->_damage << " points of damage!"
				  << std::endl;
		this->_energy--;
	}
	else
	{
		if (this->_life == 0)
			std::cout << "ScavTrap " << this->_name << " can't attack, is dead" << std::endl;
		else
			std::cout << "ScavTrap " << this->_name << " can't attack, not enough energy" << std::endl;
	}
}
