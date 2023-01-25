/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:49:48 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:49:51 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
public:

	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);
private:

	std::string name;
};

Zombie* zombieHorde(int N, std::string name);
#endif //ZOMBIE_HPP
