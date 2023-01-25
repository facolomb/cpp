/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:51 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:51 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Convert.hpp"

int	main(int argc, char **argv)
{
	Convert	cast;
	if (argc == 2)
		cast.convert(argv[1]);
	else
		std::cout << "Wrong number of argument" << std::endl;
	return (0);
}
