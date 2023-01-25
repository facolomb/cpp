/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:34:50 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:34:50 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat luc("Luc", 2);
		std::cout << luc << std::endl;
		luc.downgrade();
		std::cout << "Downgrade : " << luc << std::endl;
		luc.upgrade();
		std::cout << "Upgrade : " << luc << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat lucie("Lucie", 1);
		std::cout << lucie << std::endl;
		lucie.upgrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat jean("Jean", 150);
		std::cout << jean << std::endl;
		jean.downgrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
