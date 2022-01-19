/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:05:20 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/17 13:17:47 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.Class.hpp"
#include <iostream>


Cure::Cure() : AMateria("cure")
{
	return;
}

Cure::Cure( Cure const & other ) : AMateria(other)
{
	return ;
}

Cure & Cure::operator=( Cure const & rhs )
{
	this->AMateria::operator=(rhs);
	return (*this);
}

Cure::~Cure( void )
{
	return ;
}

AMateria	*Cure::clone( void ) const
{
	return (new(Cure(*this)));
}

void		Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() "’s wounds *" << std::endl;
	this->AMateria::use(target);
}
