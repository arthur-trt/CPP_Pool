/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:38:00 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/19 12:18:35 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.Class.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria( std::string const & type )
{
	this->_type = type;
}

AMateria::AMateria( AMateria const & other )
{
	*this = other;
}

AMateria	&AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}


std::string const &	AMateria::getType( void ) const
{
	return (_type);
}

void	AMateria::use( ICharacter & target )
{
	std::cout << "* use " <<  target.getName() << "'s Amateria *" << std::endl;
}
