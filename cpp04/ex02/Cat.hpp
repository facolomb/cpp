/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:10:11 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:10:11 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:

	Cat();
	Cat(const Cat &src);
	~Cat();

	void	makeSound() const;
private:

	Brain* _brain;
};


#endif //CAT_HPP
