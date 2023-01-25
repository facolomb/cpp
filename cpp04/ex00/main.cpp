/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:08:24 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:08:24 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::cout << "--------Wrong animal--------" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongCat* wrongSecCat = new WrongCat;

	std::cout << wrongCat->getType() << std::endl;
	std::cout << wrongSecCat->getType() << std::endl;
	wrongCat->makeSound();
	wrongSecCat->makeSound();
	wrongMeta->makeSound();

	delete wrongCat;
	delete wrongSecCat;
	delete wrongMeta;
	return (0);
}
