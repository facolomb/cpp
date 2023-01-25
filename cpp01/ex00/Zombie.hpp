/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:48:37 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:48:50 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
public:

	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
private:

	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif //ZOMBIE_HPP
