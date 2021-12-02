/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:07:10 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/02 15:49:17 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.Class.hpp"

int	Phonebook::_total = 0;

Phonebook::Phonebook( void )
{
	Phonebook::_total += 1;
	return ;
}

Phonebook::~Phonebook( void )
{
	Phonebook::_total -= 1;
	return ;
}
