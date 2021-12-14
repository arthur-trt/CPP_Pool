/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:14:09 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 15:23:07 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser_sed.hpp"

/*
**	Convert `filename` to `FILENAME.replace`
**
**	@param filename	Original filename
**
**	@return			Filename with `.replace`
*/
std::string	out_file_name(std::string filename)
{
	std::string	res;

	if (filename.find('/') != std::string::npos)
		res = filename.substr(0, filename.find_last_of('/') + 1);
	for (size_t i = filename.find_last_of('/') + 1; i < filename.length(); i++)
		res.append(1, std::toupper(filename[i]));
	res.append(".replace");
	std::cout << res << std::endl;
	return (res);
}
