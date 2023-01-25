/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:35:14 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:35:14 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:

	Form();
	Form(std::string name, const int requiredSigne, const int requiredExec);
	Form(const Form &src);
	~Form();

	Form &operator=(const Form &src);

	std::string getName() const;
	bool		getIsSigned() const;
	int 		getRequiredSigne() const;
	int 		getRequiredExec() const;
	void		beSigned(const Bureaucrat &src);

	class GradeTooHighException : public std::exception
	{
	public:

		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:

		virtual const char*	what() const throw();
	};
private:

	const std::string	_name;
	bool				_isSigned;
	const int 			_requiredSigne;
	const int			_requiredExec;
};

std::ostream &operator<<(std::ostream &o, Form const &src);

#endif //FORM_HPP
