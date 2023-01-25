/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:52:43 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:52:43 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("")
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _life(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap : Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_name = src._name;
	return (*this);
}

unsigned int ClapTrap::get_life() const
{
	return (this->_life);
}

std::string ClapTrap::get_name() const
{
	return (this->_name);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_life > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
				  << ", causing " << this->_damage << " points of damage!"
				  << std::endl;
		this->_energy--;
	}
	else
	{
		if (this->_life == 0)
			std::cout << "ClapTrap " << this->_name << " can't attack, is dead" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " can't attack, not enough energy" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_life > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repair " << amount
				  << " life point" << std::endl;
		this->_life += amount;
		this->_energy--;
	}
	else
	{
		if (this->_life == 0)
			std::cout << "ClapTrap " << this->_name << " can't repair himself, is dead" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " can't repair himself, not enough energy" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " point of damage" << std::endl;
	if (this->_life - amount < 0)
		this->_life = 0;
	else
		this->_life -= amount;
}
