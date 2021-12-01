/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:17:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/01 17:39:57 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Contact.Class.hpp"

Contact::Contact( void )
{
	std::cout << "Constructor called" << std::endl;
	this->_first_name = "";
	this->_last_name = "";
	this->_nick_name = "";
	return ;
}

Contact::~Contact( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*
**	Getter
*/
std::string	Contact::getFirstName( void ) const
{
	return this->_first_name;
}

std::string	Contact::getLastName( void ) const
{
	return this->_last_name;
}

std::string	Contact::getNickName( void ) const
{
	return this->_nick_name;
}

std::string	Contact::getPhoneNumber( void ) const
{
	return this->_phone_number;
}

std::string	Contact::getDarkestSecret( void ) const
{
	return this->_darkest_secret;
}

/*
** Setter
*/

void	Contact::setFirstName( const std::string firstname )
{
	if (firstname.empty() == false)
		this->_first_name = firstname;
	else
		std::cerr << "First name cant be empty !" << std::endl;
}

void	Contact::setLastName( const std::string lastname )
{
	if (lastname.empty() == false)
		this->_last_name = lastname;
	else
		std::cerr << "Last name can't be empty" << std::endl;
}

void	Contact::setNickName( const std::string nickname )
{
	this->_nick_name = nickname;
}

void	Contact::setPhoneNumber( const std::string phonenumber )
{
	if (phonenumber.length() == 10)
		this->_phone_number = phonenumber;
	else
		std::cerr << "Wrong length for phone number" << std::endl;
}

void	Contact::setDarkestSecret( const std::string secret )
{
	this->_darkest_secret = secret;
}
