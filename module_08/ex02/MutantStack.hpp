/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:48:05 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/19 18:22:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <climits>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		/* NO ONE*/

	public:
		/*
		**	CONSTRUCTORS
		*/
		MutantStack( void ) {};
		MutantStack( MutantStack<T> const & src )
		{
			*this = src;
		}

		/*
		**	DESCTRUCTOR
		*/
		~MutantStack( void ) {};

		/*
		**	OPERATORS OVERLOARD
		*/
		MutantStack<T>	&operator=( MutantStack<T> const & rhs )
		{
			if (*this != rhs)
				*this->c = rhs.c;
			return (*this);
		}

		/*
		**	METHODS
		*/
		typedef typename	std::stack<T>::container_type::iterator 		iterator;
 		typedef typename	std::stack<T>::container_type::const_iterator	const_iterator;
		typedef typename	std::reverse_iterator<iterator>					reverse_iterator;
		typedef typename	std::reverse_iterator<const_iterator>			const_reverse_iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}

		const_iterator	cbegin(void)
		{
			return (this->c.cbegin());
		}

		const_iterator	cend(void)
		{
			return (this->c.cend());
		}

		reverse_iterator	rbegin(void)
		{
			return (this->c.rbegin());
		}

		reverse_iterator	rend(void)
		{
			return (this->c.rend());
		}

		const_reverse_iterator	crbegin(void)
		{
			return (this->c.crbegin());
		}

		const_reverse_iterator	crend(void)
		{
			return (this->c.crend());
		}

};

#endif
