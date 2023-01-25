/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:20:23 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 15:20:27 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{}

Fixed::Fixed(const int n)
{
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
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{}

/**************Operateur de comparaison**************/

bool Fixed::operator>(const Fixed &rhs)  const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}
/**************Operateur arithmetique**************/
Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;

	result._nb = (this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;

	result._nb = (this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());
	return (result);
}
/**************Operateur d'incrementation et decrementation**************/
Fixed &Fixed::operator++()
{
	++this->_nb;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	old(*this);
	old._nb = this->_nb++;
	return (old);
}

Fixed &Fixed::operator--()
{
	--(this->_nb);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	old(*this);
	old._nb = this->_nb--;
	return (old);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return (a);
	return (b);
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
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

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
