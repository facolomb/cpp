/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:51:25 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:51:28 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
public:

	HumanB(std::string name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(const Weapon &weapon);
private:

	std::string		_name;
	const Weapon	*_weapon;
};


#endif //HUMANB_HPP
