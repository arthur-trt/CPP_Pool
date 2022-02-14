/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:29:59 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/14 14:24:44 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CLASS_HPP
# define SCALAR_CLASS_HPP

# include <string>
# include <iostream>
# include <istream>
# include <cstdlib>
# include <cfloat>
# include <climits>
# include <cmath>
# include <exception>
# include "functions.hpp"

# define	NONDISPLAYABLECHAR	1 << 0
# define	IMPOSSIBLECHAR		1 << 1
# define	IMPOSSIBLEINT		1 << 2

class Scalar
{
private:
	Scalar();

	enum	eType
	{
		ERROR = 0,
		CHAR,
		INT,
		DOUBLE,
		FLOAT
	};

	const std::string	_entry;
	char				_char;
	int					_int;
	double				_double;
	float				_float;

	unsigned int		_dot;

	unsigned int		_flag;

	enum eType			_type;

	bool	isChar( std::string entry );
	bool	isInt( std::string entry );
	bool	isDouble( std::string entry );
	bool	isFloat( std::string entry );

	void	convert( void );

public:
	Scalar( std::string _entry );
	Scalar( Scalar const & src );
	~Scalar();

	char			getChar( void ) const;
	int				getInt( void ) const;
	double			getDouble( void ) const;
	float			getFloat( void ) const;
	unsigned int	getDot( void ) const;
	unsigned int	getFlag( void ) const;

	Scalar	&operator=(Scalar const & rhs );


	class NonValidInputExcpetion : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Input is netheir int, float, double or char");
			}

	};
};

std::ostream	&operator<<(std::ostream &o, Scalar const &i);

#endif
