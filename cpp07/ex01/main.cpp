/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:39:55 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:39:55 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"

int	main(void)
{
	int nbs[5] = {654, 23, 87632, 42, -98};
	std::string strs[4] = {"Les templates", "c'est plutôt", "assez sympa", "et simple"};

	std::cout << "----Int array----" << std::endl;
	::iter(nbs, 5, ::display);
	std::cout << "----String array----" << std::endl;
	::iter(strs, 4, ::display);
}
