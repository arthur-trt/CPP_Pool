/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:46:55 by arthur            #+#    #+#             */
/*   Updated: 2021/12/20 10:03:10 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**	Constructors
*/
Fixed::Fixed( void )
{
	this->_rawbits = 0;
	return ;
}

Fixed::Fixed( const int value )
{
	this->_rawbits = value << this->_fracbits;
	return ;
}

Fixed::Fixed( const float value )
{
	this->_rawbits = (int)roundf(value * (1 << this->_fracbits));
	return ;
}

Fixed::Fixed( const Fixed& inst )
{
	*this = inst;
	return ;
}

/*
** Destructor
*/
Fixed::~Fixed ( void )
{
	return ;
}

/*
** Accessors
*/
int				Fixed::getRawBits( void ) const
{
	return (this->_rawbits);
}

void			Fixed::setRawBits( const int raw )
{
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
	this->_rawbits = other._rawbits;
	return (*this);
}

/*
** Comparators
*/
bool			Fixed::operator>( const Fixed &other ) const
{
	return (this->_rawbits > other._rawbits);
}

bool			Fixed::operator<( const Fixed &other ) const
{
	return (this->_rawbits < other._rawbits   );
}

bool			Fixed::operator>=( const Fixed &other ) const
{
	return (this->_rawbits >= other._rawbits);
}

bool			Fixed::operator<=( const Fixed &other ) const
{
	return (this->_rawbits <= other._rawbits);
}

bool			Fixed::operator==( const Fixed &other ) const
{
	return (this->_rawbits == other._rawbits);
}

bool			Fixed::operator!=( const Fixed &other ) const
{
	return (this->_rawbits != other._rawbits);
}

/*
**	Arithmetic operators
*/
Fixed			Fixed::operator+( const Fixed &other )
{
	Fixed		result;

	result.setRawBits(this->_rawbits + other._rawbits);
	return (result);
}

Fixed			Fixed::operator-( const Fixed &other )
{
	Fixed		result;

	result.setRawBits(this->_rawbits - other._rawbits);
	return (result);
}

Fixed			Fixed::operator*( const Fixed &other )
{
	Fixed		result;

	result.setRawBits(this->_rawbits * other._rawbits / (1 << this->_fracbits));
	return (result);
}

Fixed			Fixed::operator/( const Fixed &other )
{
	Fixed		result;

	result.setRawBits((this->_rawbits << this->_fracbits) / other._rawbits);
	return (result);
}

/*
**	Increment and decrement operators
*/
Fixed&			Fixed::operator++( void )
{
	this->_rawbits++;
	return (*this);
}

Fixed			Fixed::operator++( int )
{
	Fixed		result;

	result.setRawBits(this->_rawbits);
	this->_rawbits++;
	return (result);
}

Fixed&			Fixed::operator--( void )
{
	this->_rawbits--;
	return (*this);
}

Fixed			Fixed::operator--( int )
{
	Fixed		result;

	result.setRawBits(this->_rawbits);
	this->_rawbits--;
	return (result);
}

/*
**	Min / Max operators
*/
const Fixed&	Fixed::min( const Fixed &a, const Fixed &b )
{
	return (a < b ? a : b);
}

Fixed&			Fixed::min( Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b )
{
	return (a > b ? a : b);
}

Fixed&			Fixed::max( Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

/*
**	IO operators
*/
std::ostream&	operator<<( std::ostream &out, const Fixed &inst )
{
	out << inst.toFloat();
	return (out);
}
