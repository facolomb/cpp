/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:19:59 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 15:20:02 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = n << this->_fract;
}

Fixed::Fixed(const float n)
{
	int power = pow(2, this->_fract);
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(n * power);
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (this->_nb);
}

void Fixed::setRawBits(const int raw)
{
	this->_nb = raw;
}

int Fixed::toInt() const
{
	return (this->_nb >> this->_fract);
}

float Fixed::toFloat() const
{
	int power = pow(2, this->_fract);
	return ((float) this->_nb / power);
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
