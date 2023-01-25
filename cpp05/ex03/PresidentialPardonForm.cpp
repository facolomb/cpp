/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:08 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:08 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5), _target("")
{
	//std::cout << "Presidential : Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 25, 5), _target(target)
{
	//std::cout << "Presidential : Parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	std::cout << "Presidential : Copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "Presidential : Destructor called" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->_target = src._target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (this->getIsSigned() && executor.getGrade() <= this->getRequiredExec())
			std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
		else
			throw Form::ExecException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
