/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:08:05 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:08:05 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
public:

	Animal();
	Animal(std::string type);
	Animal(const Animal &src);
	virtual ~Animal();

	Animal	&operator=(const Animal &src);

	std::string getType() const;
	void		setType(std::string type);

	virtual void	makeSound() const;
protected:

	std::string	_type;
};


#endif //ANIMAL_HPP
