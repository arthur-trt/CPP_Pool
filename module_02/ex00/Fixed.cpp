/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:46:55 by arthur            #+#    #+#             */
/*   Updated: 2021/12/15 15:02:46 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
	return ;
}

Fixed::Fixed( const Fixed& inst )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
	return ;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int     Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawbits);
}

void    Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawbits = raw;
	return ;
}

Fixed&	Fixed::operator=( const Fixed &other )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawbits = other._rawbits;
	return (*this);
}