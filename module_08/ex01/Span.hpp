/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:57:02 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/22 09:44:51 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <exception>
# include <climits>

typedef	std::vector<int>::iterator	vecIt;
class Span
{
	public:
		class NotEnoughValueException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Not enough value");
				}
		};

		class StorageFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Can't store more value");
				}
		};

	private:
		std::vector<int>	_values;
		unsigned int		_size;

		Span();

	public:
		Span( const unsigned int size ) throw();
		Span( const Span & src ) throw();
		~Span( void );

		Span	&operator=( const Span & rhs ) throw();

		bool	addNumber( int n ) throw(Span::StorageFullException);
		bool	addNumber( vecIt it, vecIt ite ) throw(Span::StorageFullException);
		bool	addNumber( int value, size_t count ) throw(Span::StorageFullException);

		long	shortestSpan( void ) const throw (Span::NotEnoughValueException);
		long	longestSpan( void ) const throw (Span::NotEnoughValueException);

};

#endif
