/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:35:55 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:35:55 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat luc("Luc", 2);
		std::cout << luc << std::endl;
		ShrubberyCreationForm test("test");
		std::cout << test << std::endl;
		luc.signForm(test);
		luc.executeForm(test);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat lucie("Lucie", 10);
		std::cout << lucie << std::endl;
		RobotomyRequestForm robot("robot");
		std::cout << robot << std::endl;
		lucie.signForm(robot);
		lucie.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat robert("Robert", 5);
		std::cout << robert << std::endl;
		PresidentialPardonForm patrick("patrick");
		std::cout << patrick << std::endl;
		robert.signForm(patrick);
		robert.executeForm(patrick);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat crash("crash", 150);
		std::cout << crash << std::endl;
		ShrubberyCreationForm emma("emma");
		//RobotomyRequestForm emma("emma");
		//PresidentialPardonForm emma("emma");
		std::cout << emma << std::endl;
		crash.signForm(emma);
		crash.executeForm(emma);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
