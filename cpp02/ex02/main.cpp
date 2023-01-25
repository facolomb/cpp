/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:20:37 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 15:20:40 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( 10 );
	Fixed const c( 42.4258f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "-----------all values-----------" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "-----------Operateur de comparaison-----------" << std::endl;
	std::cout << "a > b : " << (a > b)<< std::endl;
	std::cout << "b > c : " << (b > c) << std::endl;
	std::cout << "a < d : " << (a < d) << std::endl;
	std::cout << "d < c : " << (d < c) << std::endl;
	std::cout << "b >= d : " << (b >= d) << std::endl;
	std::cout << "c >= a : " << (c >= a) << std::endl;
	std::cout << "b <= d : " << (b <= d) << std::endl;
	std::cout << "c <= d : " << (c <= d) << std::endl;
	std::cout << "b == d : " << (b == d) << std::endl;
	std::cout << "c == a : " << (c == a) << std::endl;
	std::cout << "b != d : " << (b != d) << std::endl;
	std::cout << "c != a : " << (c != a) << std::endl;
	std::cout << "-----------Operateur arithmetique-----------" << std::endl;
	std::cout << "a + d : " << a + d << std::endl;
	std::cout << "c - b : " << c - b << std::endl;
	std::cout << "d * b : " << d * b << std::endl;
	std :: cout << "a / d : " << a / d << std::endl;
	std::cout << "-----------all values-----------" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "-----------Operateur d'incrementation et decrementation-----------" << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "Check : " << a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;
	std::cout << "Check : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "-----------Min / Max-----------" << std::endl;
	std::cout << "Min a & b : " << Fixed::min(a, b) << std::endl;
	std::cout << "Min c & d : " << Fixed::min(c, d) << std::endl;
	std::cout << "Max a & d : " << Fixed::max(a, d) << std::endl;
	std::cout << "Max c & b : " << Fixed::max(c, b) << std::endl;
	return 0;
}

//int main( void ) {
//	Fixed a;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
//	return 0;
//}