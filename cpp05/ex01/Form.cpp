/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:35:10 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:35:10 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

Form::Form(): _name(""), _isSigned(false), _requiredSigne(1), _requiredExec(1)
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, const int requiredSigne, const int requiredExec): _name(name), _isSigned(false), _requiredSigne(requiredSigne), _requiredExec(requiredExec)
{
	if (requiredSigne < 1 || requiredExec < 1)
		throw Form::GradeTooHighException();
	else if (requiredSigne > 150 || requiredExec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parameter constructor called" << std::endl;
}

Form::Form(const Form &src): _requiredSigne(src.getRequiredSigne()), _requiredExec(src.getRequiredExec())
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getRequiredExec() const
{
	return (this->_requiredExec);
}

int Form::getRequiredSigne() const
{
	return (this->_requiredSigne);
}

void Form::beSigned(const Bureaucrat &src)
{
	try
	{
		if (src.getGrade() <= this->_requiredSigne)
			this->_isSigned = true;
		else
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

Form &Form::operator=(const Form &src)
{
	this->_isSigned = src._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << ", Form is signed : " << src.getIsSigned() << ", required grade to signe : "
	<< src.getRequiredSigne() << ", required grade to execute : " << src.getRequiredExec();
	return (o);
}
