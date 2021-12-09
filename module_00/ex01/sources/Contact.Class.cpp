/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:17:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/09 12:49:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Contact.Class.hpp"

Contact::Contact ( void )
{
	this->_is_set = false;
	this->_fields_name[first_name] = std::string("First Name");
	this->_fields_name[last_name] = std::string("Last Name");
	this->_fields_name[nick_name] = std::string("Nick Name");
	this->_fields_name[phone_number] = std::string("Phone Number");
	this->_fields_name[darkest_secret] = std::string("Darkest Secret");
	return ;
}

Contact::~Contact ( void )
{
	return ;
}

/*
**	Getter
*/
std::string	Contact::getFirstName( void ) const
{
	return (this->_fields[first_name]);
}

std::string	Contact::getLastName( void ) const
{
	return (this->_fields[last_name]);
}

std::string	Contact::getNickName( void ) const
{
	return (this->_fields[nick_name]);
}

std::string	Contact::getPhoneNumber( void ) const
{
	return (this->_fields[phone_number]);
}

std::string	Contact::getDarkestSecret( void ) const
{
	return (this->_fields[darkest_secret]);
}

/*
**	Setter
*/
void		Contact::setFirstName( std::string input )
{
	this->_fields[first_name] = input;
}

void		Contact::setLastName( std::string input )
{
	this->_fields[last_name] = input;
}

void		Contact::setNickName( std::string input )
{
	this->_fields[nick_name] = input;
}

void		Contact::setPhoneNumber( std::string input )
{
	this->_fields[phone_number] = input;
}

void		Contact::setDarkestSecret( std::string input )
{
	this->_fields[darkest_secret] = input;
}

/*
**	Utils
*/
bool		Contact::isSet( void ) const
{
	return (this->_is_set);
}

bool		Contact::addContact( void )
{
	std::string	tmp;
	
	if (this->_is_set)
		return (false);
	for (int i = 0; i <= darkest_secret; i++)
	{
		do
		{
			std::cout << this->_fields_name[i] << " : ";
			getline(std::cin, tmp, '\n');
		} while (tmp.empty() == true);
		this->_fields[i] = tmp;			
	}
	this->_is_set = true;
	return (true);
}

bool		Contact::removeContact( void )
{
	if (this->_is_set == false)
		return (false);
	this->_is_set = false;
	for (int i = 0; i <= darkest_secret; i++)
	{
		this->_fields[i] = "";
	}
	return (true);
}

void		Contact::print_contact( void ) const
{
	for (int i = 0; i <= darkest_secret; i++)
	{
		std::cout << this->_fields_name[i] << ": " << this->_fields[i] << std::endl;
	}
}