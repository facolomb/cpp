/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:43:21 by facolomb          #+#    #+#             */
/*   Updated: 2022/10/12 11:43:21 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>

class Contact
{
public :

	Contact(void);
	~Contact(void);
	void		set_id(int i);
	void		set_fname(std::string str);
	void		set_lname(std::string str);
	void		set_nname(std::string str);
	void		set_phnbr(std::string str);
	void		set_secret(std::string str);
	int 		get_id(void) const;
	std::string	get_fname(void) const;
	std::string	get_lname(void) const;
	std::string	get_nname(void) const;
	std::string	get_phnbr(void) const;
	std::string	get_secret(void) const;
private :

	int _id;
	std::string	_fname;
	std::string	_lname;
	std::string	_nname;
	std::string	_phnbr;
	std::string	_secret;
};

#endif //CONTACT_HPP
