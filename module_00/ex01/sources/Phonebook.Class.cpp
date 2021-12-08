/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:07:10 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/08 18:49:04 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Phonebook.Class.hpp"

int	Phonebook::_contacts_set = 0;

Phonebook::Phonebook( void )
{	
	return ;
}

Phonebook::~Phonebook( void )
{
	return ;
}

int		Phonebook::first_unset( void )
{
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if (this->_contacts[i].isSet() == false)
			return (i);
	}
	return (-1);	
}

bool	Phonebook::add_contact( void )
{
	if (Phonebook::_contacts_set == MAX_CONTACT)
	{
		std::cerr << "Phonebook is full ! Nothing i can do. Yes i know, your phone do better but don't care" << std::endl;
		return (false);
	}
	if (this->_contacts[Phonebook::first_unset()].addContact())
	{
		Phonebook::_contacts_set += 1;
		return (true);
	}
	return (false);
}

std::string center(int width, std::string str)
{
	int	pad1;
	int	pad2;
	
	if (static_cast<int>(str.length()) >= width)
		return str.substr(0, width - 1) + ".";
	pad1 = (width - str.length()) / 2;
	pad2 = (width - str.length()) - pad1;
	return (std::string(pad1, ' ') + str + std::string(pad2, ' '));	
}

void	Phonebook::print_index( void )
{
	std::cout << std::string(45, '-') << std::endl;
	std::cout	<< "|" << center(10, "INDEX")
				<< "|" << center(10, "FIRST NAME")
				<< "|" << center(10, "LAST NAME")
				<< "|" << center(10, "NICK NAME")
				<< "|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if (this->_contacts[i].isSet())
		{
			std::cout	<< "|" << std::setw(5) << i + 1 << std::setw(6)
						<< "|" << center(10, this->_contacts[i].getFirstName())
						<< "|" << center(10, this->_contacts[i].getLastName())
						<< "|" << center(10, this->_contacts[i].getNickName())
						<< "|" << std::endl;
		}
	}
	std::cout << std::string(45, '-') << std::endl;
	
}

bool	Phonebook::print_contact( int index ) const
{
	if (index > MAX_CONTACT || index < 0)
		return (false);
	if (this->_contacts[index].isSet())
	{
		this->_contacts[index].print_contact();
		return (true);
	}
	return (false);
}
