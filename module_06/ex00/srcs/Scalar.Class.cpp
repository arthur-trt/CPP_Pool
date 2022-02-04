/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:50 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/04 15:55:15 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalar.Class.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>

/*
**	CONSTRUCTORS & DESTRUCTORS
*/
Scalar::Scalar( void ) : _entry("error")
{
	#ifdef DEBUG
		std::cout << "Default constructor called (THIS IS IMPOSSIBLE)" << std::endl;
	#endif
	return ;
}

Scalar::Scalar( std::string entry ) : _entry(entry)
{
	#ifdef DEBUG
		std::cout << "String constructor called" << std::endl;
	#endif
	return ;
}

Scalar::Scalar( Scalar const & src ) : _entry(src._entry)
{
	#ifdef DEBUG
		std::cout << "Copy constructor called" << std::endl;
	#endif
	*this = src;
}

Scalar::~Scalar( void )
{
	#ifdef DEBUG
		std::cout << "Destructor called" << std::endl;
	#endif
	return ;
}

/*
**	OPERATORS OVERLOAD
*/
Scalar	&Scalar::operator=( Scalar const & rhs )
{
	#ifdef DEBUG
		std::cout << "Assignation operator called-" << std::endl;
	#endif
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_double = rhs._double;
	this->_float = rhs._float;
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Scalar const &i )
{
	#ifdef DEBUG
		std::cout << "Stream operator called-" << std::endl;
	#endif
	o	<< "char: " << i.getChar() << std::endl
		<< "int: " << i.getInt() << std::endl
		<< "float: " << i.getFloat() << std::endl
		<< "double: " << std::setprecision(1) << i.getDouble();
	return (o);
}


/*
**	METHODS
*/
int		Scalar::typeIdentification( std::string entry ) const
{
	if (entry == "nan" || entry == "-inf" || entry == "+inf")
	{
		#ifdef DEBUG
			std::cout << "Special double identified" << std::endl;
		#endif
		return (Scalar::_doubleType);
	}
	if (entry == "nanf" || entry == "-inff" || entry == "+inff")
	{
		#ifdef DEBUG
			std::cout << "Special float called" << std::endl;
		#endif
		return (Scalar::_floatType);
	}
	// VALID INTUP

	if (entry.at(entry.size()) != 'f' && isdigit(entry.at(entry.size())) != 0)
	{

	}
}

/*
**	GETTERS & SETTERS
*/
char	Scalar::getChar( void ) const
{
	return (this->_char);
}

int		Scalar::getInt( void ) const
{
	return (this->_int);
}

double	Scalar::getDouble( void ) const
{
	return (this->_double);
}

float	Scalar::getFloat( void ) const
{
	return (this->_float);
}
