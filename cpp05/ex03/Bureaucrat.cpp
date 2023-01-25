/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:36:40 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:36:40 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150)
{
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::gradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::gradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat : Parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::upgrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::gradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::downgrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::gradeTooLowException();
	else
		this->_grade++;
}

const char *Bureaucrat::gradeTooHighException::what() const throw()
{
	return ("Grade too high, must be between 1 - 150");
}

const char *Bureaucrat::gradeTooLowException::what() const throw()
{
	return ("Grade too low, must be between 1 - 150");
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
	if (form.getIsSigned())
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->_name << " couldn't sign " << form.getName()
				  << " because is grade is too low" << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form)
{
	form.execute(*this);
	if (!form.getIsSigned())
		std::cout << "Can't execute, " << form.getName() << " isn't signe" << std::endl;
	else if (this->_grade > form.getRequiredExec())
		std::cout << "Can't execute, " << this->_name << " Grade too low" << std::endl;
	else
		std::cout << this->_name << " execute " << form.getName() << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << ", Bureaucrat grade " << src.getGrade();
	return (o);
}
