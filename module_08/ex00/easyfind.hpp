/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:45:17 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 15:51:41 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found");
		}
};

template <typename T>
int	easyfind(T container, int to_find)
{
	typename T::iterator iterator;

	iterator = std::find(container.begin(), container.end(), to_find);
	if (iterator == container.end())
		throw NotFoundException();
	return (*iterator);
}

#endif
