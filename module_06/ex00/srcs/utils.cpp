/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:48:41 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/07 12:08:52 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <cctype>
#include <cstring>

bool	valid_input( std::string entry )
{
	size_t	len;
	int		dot;

	len = entry.size();
	dot = 0;
	if (len == 1 && (entry[0] > 31 && entry[0] < 127))
		return (true);
	if (isdigit(entry[0]) == 0 && entry[0] != '-' && entry[0] != '+')
			return (false);
	if (entry[len - 1] != 'f' && isdigit(entry[len - 1]) == 0)
		return (false);
	for (size_t i = 1; i < len - 1; i++)
	{
		if (isdigit(entry[i]) == 0)
		{
			if (entry[i] == '.')
				dot++;
			else
				return (false);
		}
	}
	if (dot > 1)
		return (false);
	return (true);
}
