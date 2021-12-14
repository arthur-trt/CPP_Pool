/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser_sed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:31:29 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 14:55:12 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "loser_sed.hpp"

void	loser_sed(std::string s1, std::string s2, std::ifstream &input, std::ofstream &output)
{
	std::string::size_type	pos;
	std::string				tmp;
	std::string				line;

	(void)s2;
	while (getline(input, tmp))
	{
		if (tmp.find(s1) == std::string::npos)
		{
			output << tmp << std::endl;
		}
		else
		{
			pos = 0;
			while ((pos = tmp.find(s1, pos)) != std::string::npos)
			{
				line = tmp.substr(0, pos);
				line = line.insert(pos, s2);
				line.append(tmp.substr(pos + s1.length(), tmp.length()));
				tmp = line;
			}
			output << tmp << std::endl;
		}
	}
}
