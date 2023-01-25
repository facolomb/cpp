/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:35:17 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:35:17 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat luc("Luc", 2);
		std::cout << luc << std::endl;
		Form test("test", 10, 10);
		std::cout << test << std::endl;
		luc.signForm(test);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat lucie("Lucie", 15);
		std::cout << lucie << std::endl;
		Form contact("contact", 5, 5);
		std::cout << contact << std::endl;
		lucie.signForm(contact);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
