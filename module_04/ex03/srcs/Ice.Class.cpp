/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:58:15 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 11:49:47 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.Class.hpp"
#include "AMateria.Class.hpp"

Ice::Ice() : AMateria("ice")
{
	return;
}

Ice::Ice( Ice const & other ) : AMateria(other)
{
	return;
}

Ice & Ice::operator=( Ice const & rhs )
{
	this->AMateria::operator=(rhs);
	return (*this);
}

Ice::~Ice( void )
{
	return;
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice(*this));
}

void		Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->AMateria::use(target);
}
