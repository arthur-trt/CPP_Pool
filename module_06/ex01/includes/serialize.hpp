/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:37:33 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:10:57 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <stdint.h>

typedef struct	s_data
{
	int			n;
	char		c;
	std::string	s;
}				Data;

uintptr_t	serialize(Data* ptr);
Data *		deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream &flux, const Data &obj);

#endif
