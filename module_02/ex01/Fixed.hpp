/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:43:25 by arthur            #+#    #+#             */
/*   Updated: 2021/12/16 11:41:40 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					_rawbits;
	const static int	_fracbits = 8;
public:
	Fixed( void );
	Fixed( int value );
	Fixed( float value );
	Fixed( const Fixed& inst );

	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits ( const int raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed&	operator=( const Fixed &other );
};

std::ostream&	operator<<( std::ostream &out, const Fixed &inst );

#endif
