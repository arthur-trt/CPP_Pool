/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:46:55 by arthur            #+#    #+#             */
/*   Updated: 2021/12/16 11:42:28 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**	Constructors
*/
Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
	return ;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawbits = value << this->_fracbits;
	return ;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawbits = (int)(value * (1 << this->_fracbits));
	return ;
}

Fixed::Fixed( const Fixed& inst )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
	return ;
}

/*
** Destructor
*/
Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*
** Accessors
*/
int				Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawbits);
}

void			Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawbits = raw;
	return ;
}

float			Fixed::toFloat ( void ) const
{
	return ((float)this->_rawbits / (1 << this->_fracbits));
};

int				Fixed::toInt ( void ) const
{
	return (this->_rawbits >> this->_fracbits);
};

/*
**	Operators
*/
Fixed&			Fixed::operator=( const Fixed &other )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawbits = other._rawbits;
	return (*this);
}

std::ostream&	operator<<( std::ostream &out, const Fixed &inst )
{
	out << inst.toFloat();
	return (out);
}
