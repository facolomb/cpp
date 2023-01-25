/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:53:14 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/09 13:53:14 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &src);

	void	guardGate(void);
	void 	attack(const std::string &target);
private:

};

#endif //SCAVTRAP_HPP
