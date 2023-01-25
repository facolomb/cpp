/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:36:57 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:36:57 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern : Default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern : Copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern : Destructor called" << std::endl;
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	t_formList forms[] =
			{
					{"shrubbery creation", new ShrubberyCreationForm(target)},
					{"robotomy request", new RobotomyRequestForm(target)},
					{"presidential pardon", new PresidentialPardonForm(target)},
					{"", NULL}
			};
	Form *resForm = NULL;

	for(int i = 0; forms[i].formType != NULL; i++)
	{
		if (formName == forms[i].name)
			resForm = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if (resForm == NULL)
		std::cout << "Intern didn't find \"" << formName << "\" Form" << std::endl;
	else
		std::cout << "Intern create " << formName << std::endl;
	return (resForm);
}