/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:04 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:04 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat luc("luc", 2);
		Intern someRandomIntern;
		Form* rrf;

		rrf = someRandomIntern.makeForm("error", "Lucie");
		if (rrf)
			delete rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bernard");
		if (rrf)
			delete rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Jack");
		if (rrf)
			delete rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Clark");
		if (rrf)
		{
			rrf->beSigned(luc);
			rrf->execute(luc);
			delete rrf;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
