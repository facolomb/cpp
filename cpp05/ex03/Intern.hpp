/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:00 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:00 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
public:

	Intern();
	Intern(Intern const &src);
	~Intern();

	Form *makeForm(std::string const &formName, std::string const &target) const;
private:

	typedef struct s_formList{
		std::string name;
		Form *formType;
	}t_formList;
};


#endif //INTERN_HPP
