/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:39:13 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:11:06 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

std::ostream	&operator<<(std::ostream &o, const Data &obj)
{
	o	<< "nb : " << obj.n << std::endl
		<< "c : " << obj.c << std::endl
		<< "s : " << obj.s << std::endl;
	return (o);
}
