/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:16 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:16 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), _target("")
{
	//std::cout << "Robotomy : Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), _target(target)
{
	//std::cout << "Robotomy : Parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	std::cout << "Robotomy : Copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "Robotomy : Destructor called" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_target = src._target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		std::srand(std::time(0));
		if (this->getIsSigned() && executor.getGrade() <= this->getRequiredExec())
		{
			std::cout << "Brrr... Some drill sounds ...rrrB" << std::endl;
			if (std::rand() % 2)
				std::cout << this->_target << " has been successfully robotomized" << std::endl;
			else
				std::cout << "Robotomy on " << this->_target << " has failed" << std::endl;
		}
		else
			throw Form::ExecException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
