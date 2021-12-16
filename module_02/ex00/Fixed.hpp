/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:43:25 by arthur            #+#    #+#             */
/*   Updated: 2021/12/15 14:56:59 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int                 _rawbits;
	const static int    _fracbits = 8;
public:
	Fixed( void );
	Fixed( const Fixed& inst );
	
	~Fixed( void );

	int     getRawBits( void ) const;
	void    setRawBits ( const int raw );

	Fixed&  operator=( const Fixed &other );
};

#endif