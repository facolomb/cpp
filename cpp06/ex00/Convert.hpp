/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:47 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:47 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>

class Convert
{
public:

	Convert();
	Convert(const Convert &src);
	~Convert();

	Convert	&operator=(const Convert &src);

	void	convert(const std::string &literal);
private:

	static bool	allDigit(std::string literal);
	bool	checkPseudo(std::string literal);
	void	displayAll(bool haveDot);
	void	checkChar();

	std::string	_pseudo;
	char		_toChar;
	int 		_charDisplayable;
	int			_toInt;
	float 		_toFloat;
	double		_toDouble;

};


#endif //CONVERT_HPP
