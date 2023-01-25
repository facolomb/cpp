/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:38:48 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:38:48 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *type;
	int random;

	random = std::rand() % 3;
	if (random == 0)
		type = new A;
	else if (random == 1)
		type = new B;
	else
		type = new C;
	return (type);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "type is Class A object" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "type is Class B object" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "type is Class C object" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "type is Class A object" << std::endl;
	}
	catch (std::exception &e)
	{
		(void) e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "type is Class B object" << std::endl;
	}
	catch (std::exception &e)
	{
		(void) e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "type is Class C object" << std::endl;
	}
	catch (std::exception &e)
	{
		(void) e;
	}
}

int	main(void)
{
	Base *test;

	srand(time(NULL));
	for (int i = 0; i < 6; ++i)
	{
		test = generate();
		std::cout << "Pointer : ";
		identify(test);
		std::cout << "Reference : ";
		identify(*test);
		std::cout << std::endl;
		delete test;
	}
	return (0);
}