/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:52:15 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:52:15 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &src);

	unsigned int	get_life() const;
	std::string 	get_name() const;
	void	setName(std::string name);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:

	std::string		_name;
	unsigned int	_life;
	unsigned int	_energy;
	unsigned int	_damage;
};


#endif //CLAPTRAP_HPP
