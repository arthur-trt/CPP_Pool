/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:11:56 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/18 15:21:52 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
**	CONSTRUCTORS
*/

Span::Span( void ) : _size(0)
{
	return ;
}

Span::Span( const unsigned int size ) throw() : _size(size)
{
	return ;
}

Span::Span( const Span & src ) throw() : _size(src._size)
{
	this->_values = src._values;
}

Span::~Span( void )
{
	return;
}

/*
**	OPERATORS OVERLOAD
*/
Span	&Span::operator=( const Span & rhs ) throw()
{
	if (this != &rhs)
	{
		this->_values = rhs._values;
		this->_size = rhs._size;
	}
	return (*this);
}

/*
**	MEMBERS FUNCTIONS
*/
bool	Span::addMember( int n ) throw(Span::StorageFullException)
{
	if (this->_values.size() >= this->_size)
	{
		throw Span::StorageFullException();
		return (false);
	}
	else
	{
		this->_values.push_back(n);
		return (true);
	}
}

long	Span::shortestSpan( void ) const throw(Span::NotEnoughValueException)
{
	if (this->_values.size() < 2)
		throw Span::NotEnoughValueException();

	std::vector<int>			tmp = this->_values;
	std::vector<int>::iterator	prev_it;
	std::vector<int>::iterator	next_it;
	unsigned int				shortest;

	std::sort(tmp.begin(), tmp.end());
	prev_it = tmp.begin();
	next_it = ++tmp.begin();
	shortest = *next_it - *prev_it;

	while (next_it != tmp.end())
	{
		if ((long)*next_it - *prev_it < shortest)
			shortest = (long)*next_it - *prev_it;
		prev_it = next_it;
		next_it++;
	}
	return (shortest);
}

long	Span::longestSpan( void ) const throw(Span::NotEnoughValueException)
{
	if (this->_values.size() < 2)
		throw Span::NotEnoughValueException();

	std::vector<int>	tmp = this->_values;

	std::sort(tmp.begin(), tmp.end());

	return ((long)(tmp.back() - tmp.front()));
}
