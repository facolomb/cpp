/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:51:34 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:51:37 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::~Weapon()
{}

void	Weapon::setType(std::string const &type)
{
	this->_type = type;
}

std::string	const &Weapon::getType() const
{
	return (this->_type);
}
