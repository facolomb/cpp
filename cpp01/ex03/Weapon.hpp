/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:51:41 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:51:44 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
public:

	Weapon(std::string type);
	~Weapon(void);
	void	setType(std::string const &type);
	std::string	const &getType(void) const;
private:

	std::string	_type;
};


#endif //WEAPON_HPP
