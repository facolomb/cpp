/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:03:34 by facolomb          #+#    #+#             */
/*   Updated: 2022/10/06 14:03:34 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (unsigned int x = 0; x < strlen(argv[i]); x++)
				argv[i][x] = std::toupper(argv[i][x]);
			std::cout << argv[i] << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
