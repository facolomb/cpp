/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:19:32 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 15:19:35 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
public:

	Fixed();
	Fixed(const Fixed &src);
	~Fixed();

	Fixed	&operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:

	int					_nb;
	static const int	_fract = 8;
};


#endif //FIXED_HPP
