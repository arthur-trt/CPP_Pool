/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:56:57 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 19:02:15 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

/*
**  CONSTRUCTORS
*/
WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal(void) has been created (weirdo)" << std::endl;
	this->type = "void";
	return ;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << "WrongAnimal(" << type << ") has been created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & other)
{
	*this = other;
}

/*
**  DESTRUCTOR
*/
WrongAnimal::~WrongAnimal( void )
{
	return ;
}

/*
**  ASSIGNATION OPERATOR
*/
WrongAnimal  &WrongAnimal::operator=( const WrongAnimal & other )
{
	this->type = other.getType();
	return (*this);
}

/*
**  GETTERS
*/
std::string const   &WrongAnimal::getType( void ) const
{
	return (this->type);
}

/*
**  SPECIALS
*/
void		WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal !" << std::endl;
	return ;
}