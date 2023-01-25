/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:19:39 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 15:19:41 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	a.setRawBits(8);
	b.setRawBits(5);
	c = b;
	std::cout << "a :" << a.getRawBits() << std::endl;
	std::cout << "b :" << b.getRawBits() << std::endl;
	std::cout << "c :" << c.getRawBits() << std::endl;
	return 0;
}
