/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:09:57 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:09:57 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "Brain.hpp"

class Animal
{
public:

	virtual ~Animal();

	virtual Animal	&operator=(const Animal &src);

	std::string getType() const;

	virtual void	makeSound() const = 0;
protected:

	std::string	_type;
};


#endif //ANIMAL_HPP
