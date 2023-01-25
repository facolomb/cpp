/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:50:34 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:50:40 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "Printing Address :" << std::endl;
	std::cout << "string : " << &str << std::endl;
	std::cout << "PTR : " << strPTR << std::endl;
	std::cout << "REF : " << &strREF << std::endl;

	std::cout << "Printing value :" << std::endl;
	std::cout << "string : " << str << std::endl;
	std::cout << "PTR : " << *strPTR << std::endl;
	std::cout << "REF : " << strREF << std::endl;

	return (0);
}
