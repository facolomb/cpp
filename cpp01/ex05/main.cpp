/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:52:39 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:52:42 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "Debug message :" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Info message :" << std::endl;
	harl.complain("INFO");
	std::cout << "Warning message :" << std::endl;
	harl.complain("WARNING");
	std::cout << "Error message :" << std::endl;
	harl.complain("ERROR");
	return (0);
}
