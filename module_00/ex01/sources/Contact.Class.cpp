/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:17:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/02 15:57:58 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Contact.Class.hpp"

Contact::Contact ( void )
{
	this->_is_set = false;
	return ;
}

Contact::~Contact ( void )
{
	return ;
}


bool	Contact::setFields( void )
{
	std::string	tmp;

	for (int i = first_name; i <= darkest_secret; i++)
	{
		std::cout << "* " << this->_fields_name[i] << " : " << std::ends;
		std::getline(std::cin, tmp);
		this->_fields.map::insert({ this->_fields_name[i], tmp });
	}
	return (true);
}

void	Contact::getFields( void ) const
{
		for (int i = first_name; i <= darkest_secret; i++)
	{
		std::cout << "* " << this->_fields_name[i] << " : " << std::ends;
		std::cout << 
	}
	return (true);
}
