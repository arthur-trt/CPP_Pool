/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:50:32 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:54:17 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T>
T const & max( T const & x, T const & y )
{
	return (x > y ? x : y);
}

template <typename T>
T const & min( T const & x, T const & y )
{
	return (x < y ? x : y);
}

template <typename T>
void swap( T & x, T & y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif
