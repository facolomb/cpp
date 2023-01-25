/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:40:06 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:40:06 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Array.hpp"

int main(void)
{
	Array<int>	nbs(5);
	Array<std::string>	strs(4);
	Array<std::string>	cpy;

	nbs[0] = 654;
	nbs[1] = 23;
	nbs[2] = 87632;
	nbs[3] = 42;
	nbs[4] = -98;

	strs[0] = "Les templates";
	strs[1] = "c'est plutôt";
	strs[2] = "assez sympa";
	strs[3] = "et simple";

	try
	{
		for(int i = 0; i < 5; i++)
			std::cout << "nbs[" << i << "] : " << nbs[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "strs[2] : " << strs[2] << std::endl;
		std::cout << "strs[67] : " << strs[67] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	cpy = strs;
	try
	{
		for(int i = 0; i < 4; i++)
			std::cout << "cpy[" << i << "] : " << cpy[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}