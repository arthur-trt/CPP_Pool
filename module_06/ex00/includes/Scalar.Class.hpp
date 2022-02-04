/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:29:59 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/04 15:54:29 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CLASS_HPP
# define SCALAR_CLASS_HPP

# include <string>
# include <iostream>
# include <istream>
# include <cstdlib>
# include <exception>

class Scalar
{
private:
	Scalar();

	const std::string	_entry;
	char				_char;
	int					_int;
	double				_double;
	float				_float;

	static const int	_noType		= 1;
	static const int	_charType	= 2;
	static const int	_intType	= 3;
	static const int	_doubleType	= 4;
	static const int	_floatType	= 5;

	int		typeIdentification( std::string entry ) const;

public:
	Scalar( std::string _entry );
	Scalar( Scalar const & src );
	~Scalar();

	Scalar	&operator=(Scalar const & rhs );



	char	getChar( void ) const;
	int		getInt( void ) const;
	double	getDouble( void ) const;
	float	getFloat( void ) const;

	class NonValidInputExcpetion : public std::exception
	{
		public:
			virtual const char *what() const
			{
				return ("Input is netheir int, float, double or char");
			}

	};
};

std::ostream	&operator<<(std::ostream &o, Scalar const &i);

#endif
