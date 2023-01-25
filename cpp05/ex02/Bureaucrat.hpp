/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:35:33 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:35:33 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &src);

	std::string getName(void) const;
	int 		getGrade(void) const;
	void		upgrade(void);
	void		downgrade(void);
	void		signForm(Form &form);
	void		executeForm(Form const & form);

	class gradeTooHighException : public std::exception
	{
		public:

		virtual const char* what() const throw();
	};

	class gradeTooLowException : public std::exception
	{
		public:

		virtual const char* what() const throw();
	};
private:

	const std::string 	_name;
	int 				_grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif //BUREAUCRAT_HPP
