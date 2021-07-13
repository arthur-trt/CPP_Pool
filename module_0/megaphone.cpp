/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:53:28 by atrouill          #+#    #+#             */
/*   Updated: 2021/07/13 16:09:44 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void upper_str(char *s)
{
	int		i;
	size_t len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		std::cout << std::toupper(s[i]);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 1)
	{
		for (size_t i = 1; i < argc; i++)
		{
			upper_str(argv[i]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
