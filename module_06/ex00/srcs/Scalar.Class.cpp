/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:50 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/16 10:08:29 by atrouill         ###   ########.fr       */
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
	return ;
}

Scalar::Scalar( std::string entry ) : _entry(entry)
{
	this->_dot = 0;
	this->_flag = 0;
	if (this->isChar(entry) == false && this->isDouble(entry) == false
		&& this->isFloat(entry) == false && this->isInt(entry) == false)
	{
		this->_type = ERROR;
	}
	if (this->_type != ERROR)
	{
		if (entry.find('.') != std::string::npos)
		{
			std::string	tmp = entry.substr(entry.find('.') + 1, entry.size() - entry.find('.'));
			this->_dot = tmp.size();
			if (this->_type == 4)
				this->_dot--;
		}
		else
		{
			this->_dot = 1;
		}
	}
	#ifdef DEBUG
		std::cout	<< "Type : " << this->_type << std::endl
					<< "Dot : " << this->_dot << std::endl;
	#endif
	convert();
	return ;
}

Scalar::Scalar( Scalar const & src ) : _entry(src._entry)
{
	*this = src;
}

Scalar::~Scalar( void )
{
	return ;
}

/*
**	OPERATORS OVERLOAD
*/
Scalar	&Scalar::operator=( Scalar const & rhs )
{
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_double = rhs._double;
	this->_float = rhs._float;
	this->_type = rhs._type;
	this->_flag = rhs._flag;
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Scalar const &i )
{
	o	<< "char: ";
		if (i.getFlag() & IMPOSSIBLECHAR)
			o << "impossible";
		else if (i.getFlag() & NONDISPLAYABLECHAR)
			o << "non displayable";
		else
			o << "'" << i.getChar() << "'";
		o << std::endl << "int: ";
		if (i.getFlag() & IMPOSSIBLEINT)
			o << "impossible";
		else
			o << i.getInt();
	o	<< std::fixed << std::setprecision(i.getDot())
		<< std::endl << "float: " << i.getFloat() << "f"
		<< std::endl << "double: " << i.getDouble();
	return (o);
}


/*
**	METHODS
*/

bool	Scalar::isChar( std::string entry )
{
	if (entry.size() != 1 || std::isprint(entry[0]) == false)
		return (false);
	if (entry[0] >= 48 && entry[0] <= 57)
		return (false);
	#ifdef DEBUG
		std::cout << "Char detected" << std::endl;
	#endif
	this->_char = entry[0];
	this->_type = CHAR;
	return (true);
}

bool	Scalar::isInt( std::string entry )
{
	char		*after = NULL;
	long int	ret;

	ret = std::strtol(entry.c_str(), &after, 10);
	if (*after != '\0' || ret < INT_MIN || ret > INT_MAX)
		return (false);
	#ifdef DEBUG
		std::cout << "Int detected" << std::endl;
	#endif
	this->_int = static_cast<int>(ret);
	this->_type = INT;
	return (true);
}

bool	Scalar::isDouble( std::string entry )
{
	char	*after = NULL;
	double	ret;

	ret = std::strtod(entry.c_str(), &after);
	if (*after != '\0')
		return (false);
	#ifdef DEBUG
		std::cout << "Double detected" << std::endl;
	#endif
	this->_double = static_cast<double>(ret);
	this->_type = DOUBLE;
	return (true);
}

bool	Scalar::isFloat( std::string entry )
{
	char	*after = NULL;
	float	ret;

	ret = std::strtof(entry.c_str(), &after);
	if (*after != 'f' && (*after + 1) != '\0')
		return (false);
	#ifdef DEBUG
		std::cout << "Float detected" << std::endl;
	#endif
	this->_float = static_cast<float>(ret);
	this->_type = FLOAT;
	return (true);
}


void	Scalar::convert( void )
{
	switch (this->_type)
	{
	case CHAR:
		this->_int = static_cast<int>(this->_char);
		this->_double = static_cast<double>(this->_char);
		this->_float = static_cast<float>(this->_char);
		break;

	case INT:
		this->_char = static_cast<char>(this->_int);
		this->_double = static_cast<double>(this->_int);
		this->_float = static_cast<float>(this->_int);
		break;

	case DOUBLE:
		this->_char = static_cast<char>(this->_double);
		this->_int = static_cast<int>(this->_double);
		this->_float = static_cast<float>(this->_double);
		break;

	case FLOAT:
		this->_char = static_cast<char>(this->_float);
		this->_int = static_cast<int>(this->_float);
		this->_double = static_cast<double>(this->_float);
		break;

	default:
		this->_flag = IMPOSSIBLECHAR | IMPOSSIBLEINT;
		this->_double = NAN;
		this->_flag = NAN;
		break;
	}
	if (this->_double < INT_MIN || this->_double > INT_MAX
		|| std::isnan(this->_double)  == true || std::isinf(this->_double) == true)
		this->_flag = IMPOSSIBLEINT | IMPOSSIBLECHAR;
	else if (this->_double < CHAR_MIN || this->_double > CHAR_MAX)
		this->_flag = IMPOSSIBLECHAR;
	else if (std::isprint(this->_char) == false)
		this->_flag = NONDISPLAYABLECHAR;
}

/*
**	GETTERS & SETTERS
*/
char			Scalar::getChar( void ) const
{
	return (this->_char);
}

int				Scalar::getInt( void ) const
{
	return (this->_int);
}

double			Scalar::getDouble( void ) const
{
	return (this->_double);
}

float			Scalar::getFloat( void ) const
{
	return (this->_float);
}

unsigned int	Scalar::getDot( void ) const
{
	return (this->_dot);
}

unsigned int	Scalar::getFlag( void ) const
{
	return (this->_flag);
}
