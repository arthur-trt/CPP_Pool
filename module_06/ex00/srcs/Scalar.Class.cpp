/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:50 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/07 14:05:20 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalar.Class.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <climits>
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
	int		type;
	bool	((*fun[4])( std::string entry )) = {
		&Scalar::convertFromChar,
		&Scalar::convertFromInt,
		&Scalar::convertFromDouble,
		&Scalar::convertFromFloat,
	};

	type = typeIdentification(this->_entry);
	fun[type](entry);
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
	if (valid_input(entry) == false)
		throw (Scalar::NonValidInputExcpetion());
	if (entry.size() == 1 && (entry[0] > 31 && entry[0] < 127))
		return (Scalar::_charType);
	if (entry[entry.size() - 1] == 'f')
		return (Scalar::_floatType);
	if (entry.find('.') != std::string::npos)
		return (Scalar::_doubleType);
	return (Scalar::_intType);
}

bool	Scalar::convertFromChar( std::string entry )
{
	this->_char = static_cast<char>(entry[0]);
	this->_int = static_cast<int>(entry[0]);
	this->_double = static_cast<double>(entry[0]);
	this->_float = static_cast<float>(entry[0]);
	return true;
}

bool	Scalar::convertFromInt( std::string entry )
{
	this->_double = atof(entry.c_str());
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
	if (this->_int >= CHAR_MIN && this->_int <= CHAR_MAX)
		this->_char = static_cast<char>(this->_char);
	return (true);
}

bool	Scalar::convertFromDouble( std::string entry)
{
	(void)entry;
	return (true);
}

bool	Scalar::convertFromFloat( std::string entry)
{
	(void)entry;
	return (true);
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
