/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:38 by facolomb          #+#    #+#             */
/*   Updated: 2022/10/12 11:40:38 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

int is_a_cmd(std::string str, PhoneBook *phbook)
{
	if (str == "ADD")
	{
		phbook->add();
		return (1);
	}
	else if (str == "SEARCH")
	{
		phbook->display_all();
		return (2);
	}
	else if (str == "EXIT")
		return (3);
	else
		return (0);
}

int main(void)
{
	PhoneBook	phbook;
	std::string input;

	while (true)
	{
		std::cout << "PhoneBook waiting [ ADD | SEARCH | EXIT ]" << std::endl;
		std::cin >> input;
		if (is_a_cmd(input, &phbook) == 3)
			break ;
	}
	return (0);
}
