/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:56:57 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 18:19:11 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

/*
**  CONSTRUCTORS
*/
Animal::Animal( void )
{
	std::cout << "Animal(void) has been created (weirdo)" << std::endl;
	this->type = "void";
	return ;
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << "Animal(" << type << ") has been created" << std::endl;
	return ;
}

Animal::Animal( const Animal & other)
{
	*this = other;
}

/*
**  DESTRUCTOR
*/
Animal::~Animal( void )
{
	return ;
}

/*
**  ASSIGNATION OPERATOR
*/
Animal  &Animal::operator=( const Animal & other )
{
	this->type = other.getType();
	return (*this);
}

/*
**  GETTERS
*/
std::string const   &Animal::getType( void ) const
{
	return (this->type);
}

/*
**  SPECIALS
*/
void		Animal::makeSound( void ) const
{
	std::cout << "Animal !" << std::endl;
	return ;
}