/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:43:17 by facolomb          #+#    #+#             */
/*   Updated: 2022/10/12 11:43:17 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void 	Contact::set_id(int i)
{
	this->_id = i;
}

void	Contact::set_fname(std::string str)
{
	this->_fname = str;
}

void	Contact::set_lname(std::string str)
{
	this->_lname = str;
}

void	Contact::set_nname(std::string str)
{
	this->_nname = str;
}

void	Contact::set_phnbr(std::string str)
{
	this->_phnbr = str;
}

void	Contact::set_secret(std::string str)
{
	this->_secret = str;
}

int	Contact::get_id() const
{
	return this->_id;
}

std::string Contact::get_fname(void) const
{
	return this->_fname;
}

std::string Contact::get_lname(void) const
{
	return this->_lname;
}

std::string	Contact::get_nname(void) const
{
	return this->_nname;
}

std::string Contact::get_phnbr(void) const
{
	return this->_phnbr;
}

std::string Contact::get_secret(void) const
{
	return this->_secret;
}