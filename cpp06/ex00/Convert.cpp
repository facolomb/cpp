/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:43 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:43 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Convert.hpp"

Convert::Convert(): _charDisplayable(1), _pseudo("")
{}

Convert::Convert(const Convert &src)
{
	*this = src;
}

Convert::~Convert()
{}

Convert &Convert::operator=(const Convert &src)
{
	(void) src;
	return (*this);
}

void Convert::convert(const std::string &literal)
{
	if (literal.size() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0]))
	{
		this->_toChar = static_cast<char>(literal[0]);
		this->_toInt = static_cast<int>(literal[0]);
		this->_toFloat = static_cast<float>(literal[0]);
		this->_toDouble = static_cast<double>(literal[0]);
		this->displayAll(0);
	}
	else if (literal.find(".") != std::string::npos)
	{
		this->_toInt = std::atoi(literal.c_str());
		this->checkChar();
		this->_toFloat = std::atof(literal.c_str());
		this->_toDouble = static_cast<double>(this->_toFloat);
		this->displayAll(1);
	}
	else if (Convert::allDigit(literal))
	{
		this->_toInt = std::atoi(literal.c_str());
		this->checkChar();
		this->_toFloat = static_cast<float>(this->_toInt);
		this->_toDouble = static_cast<double>(this->_toInt);
		this->displayAll(0);
	}
	else if (this->checkPseudo(literal))
		this->displayAll(0);
	else
		std::cout << "Not a compatible type : char / int / float / double" << std::endl;
}

bool Convert::allDigit(std::string literal)
{
	for(int i = 0; i < literal.size(); i++)
	{
		if (!isdigit(literal[i]))
			return (0);
	}
	return (1);
}

bool Convert::checkPseudo(std::string literal)
{
	std::string pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for(int i = 0; i < 6; i++)
	{
		if (literal == pseudo[i] && i <= 2)
		{
			this->_pseudo = pseudo[i + 3];
			return (1);
		}
		else if (literal == pseudo[i])
		{
			this->_pseudo = pseudo[i];
			return (1);
		}
	}
	return (0);
}

void Convert::displayAll(bool haveDot)
{
	if (this->_pseudo != "")
	{
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_pseudo <<  "f" <<std::endl;
		std::cout << "Double : " << this->_pseudo << std::endl;
		return;
	}
	if (this->_charDisplayable == 1)
		std::cout << "Char : " << this->_toChar << std::endl;
	else if (this->_charDisplayable == 0)
		std::cout << "Char : Non displayable" << std::endl;
	else
		std::cout << "Char : impossible" << std::endl;
	std::cout << "Int : " << this->_toInt << std::endl;
	if (haveDot)
	{
		std::cout << "Float : " << this->_toFloat << "f" << std::endl;
		std::cout << "Double : " << this->_toDouble << std::endl;
	}
	else
	{
		std::cout << "Float : " << this->_toFloat << ".0f" << std::endl;
		std::cout << "Double : " << this->_toDouble << ".0" << std::endl;
	}
}

void Convert::checkChar()
{
	if (this->_toInt > 127 || this->_toInt < 0)
		this->_charDisplayable = -1;
	else if (this->_toInt <= 31 || this->_toInt == 127)
		this->_charDisplayable = 0;
	else
		this->_toChar = static_cast<char>(this->_toInt);
}