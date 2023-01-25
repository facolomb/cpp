/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:50:59 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:51:02 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:

	HumanA(std::string name,const Weapon &weapon);
	~HumanA(void);
	void	attack(void) const;
private:

	std::string		_name;
	const Weapon	&_weapon;
};


#endif //HUMANA_HPP
