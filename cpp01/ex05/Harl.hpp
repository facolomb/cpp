/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:52:33 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:52:36 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{

public:

	void complain(std::string level);
private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};


#endif //HARL_HPP
