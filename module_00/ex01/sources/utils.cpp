/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:38:25 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/08 18:37:11 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"
#include <stdexcept> 
#include <iostream>

int to_int(char const *s)
{
	bool	negate;
	int		result;
	
	if ( s == NULL || *s == '\0' )
	{
		std::cerr << "Please enter the index number of the contact to print" << std::endl;
		return (-1);
	}
	negate = (s[0] == '-');
	if ( *s == '+' || *s == '-' ) 
		++s;

	if ( *s == '\0')
	{
		std::cerr << "Please enter the index number of the contact to print" << std::endl;
		return (-1);
	}
	result = 0;
	while(*s)
	{
		if ( *s < '0' || *s > '9' )
		{
			std::cerr << "Please enter the index number of the contact to print" << std::endl;
			return (-1);
		}
		result = result * 10  - (*s - '0');
		++s;
	}
	return negate ? result : -result;
} 