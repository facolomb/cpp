/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:09:19 by facolomb          #+#    #+#             */
/*   Updated: 2023/01/10 10:09:19 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
public:

	Brain();
	Brain(const Brain &src);
	~Brain();

	Brain &operator=(const Brain &src);
	std::string _ideas[100];
};


#endif //BRAIN_HPP
