/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:50 by facolomb          #+#    #+#             */
/*   Updated: 2022/10/12 11:40:50 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
public :

	PhoneBook (void);
	~PhoneBook(void);
	void	add();
	void	display_all() const;
	void	display_contact() const;

private :

	Contact	_all[8];
	int 	_oldest;
	int 	_nbContact;
	int 	check_index();
	static	std::string	str_trim(std::string str);
};

#endif //PHONEBOOK_HPP
