/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:01:41 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 12:11:45 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>

template <typename T>
void	iter(T const *array, size_t const len, void fct(const T &))
{
	for (size_t i = 0; i < len; i++)
	{
		fct(array[i]);
	}
}

template <typename T>
void	print(const T &a)
{
	std::cout << a << std::endl;
}

#endif
