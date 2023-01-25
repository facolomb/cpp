/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:45 by facolomb          #+#    #+#             */
/*   Updated: 2022/10/12 11:40:45 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_oldest = 0;
	this->_nbContact = 0;
}

PhoneBook::~PhoneBook(void)
{}

int	PhoneBook::check_index()
{
	int i;

	if (this->_nbContact == 8)
	{
		i = this->_oldest;
		if (this->_oldest == 7)
			this->_oldest = 0;
		else
			this->_oldest++;
	}
	else
	{
		i = this->_nbContact;
		this->_nbContact++;
	}
	return (i);
}

void	PhoneBook::add()
{
	std::string input;
	int			i;

	i = check_index();
	this->_all[i].set_id(i);

	std::cout << "First name : ";
	std::getline(std::cin >> std::ws, input);
	this->_all[i].set_fname(input);

	std::cout << "Last name : ";
	std::getline(std::cin >> std::ws, input);
	this->_all[i].set_lname(input);

	std::cout << "Nick name : ";
	std::getline(std::cin >> std::ws, input);
	this->_all[i].set_nname(input);

	std::cout << "Phone number : ";
	std::getline(std::cin >> std::ws, input);
	this->_all[i].set_phnbr(input);

	std::cout << "Darkest secret : ";
	std::getline(std::cin >> std::ws, input);
	this->_all[i].set_secret(input);
}

std::string PhoneBook::str_trim(std::string str)
{
	if (str.length() >= 10)
		str = str.substr(0, 9).append(".");
	return (str);
}

void PhoneBook::display_all() const
{
	if (this->_nbContact <= 0)
		std::cout << "No one register yet" << std::endl;
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << "id";
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Firstname";
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Lastname";
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Nickname";
		std::cout << " | " << std::endl;
		for (int i = 0; i < this->_nbContact; i++)
		{
			std::cout << std::setfill(' ') << std::setw(10)
					  << this->_all[i].get_id();
			std::cout << " | ";
			std::cout << std::setfill(' ') << std::setw(10)
					  << this->str_trim(this->_all[i].get_fname());
			std::cout << " | ";
			std::cout << std::setfill(' ') << std::setw(10)
					  << this->str_trim(this->_all[i].get_lname());
			std::cout << " | ";
			std::cout << std::setfill(' ') << std::setw(10)
					  << this->str_trim(this->_all[i].get_nname());
			std::cout << " | " << std::endl;
		}
		display_contact();
	}
}

void PhoneBook::display_contact() const
{
	int i;

	std::cout << "Enter id for more info : ";
	while (!(std::cin >> i) || i < 0 || i >= this->_nbContact)
	{
		std::cout << "Invalid id" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	std::cout << "First name :" << this->_all[i].get_fname() << std::endl;
	std::cout << "Last name :" << this->_all[i].get_lname() << std::endl;
	std::cout << "Nick name :" << this->_all[i].get_nname() << std::endl;
	std::cout << "Phone number :" << this->_all[i].get_phnbr() << std::endl;
	std::cout << "Darkest secret :" << this->_all[i].get_secret() << std::endl;
	std::cin.clear();
	std::cin.ignore(10000,'\n');
}
