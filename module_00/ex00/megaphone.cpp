/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:53:28 by atrouill          #+#    #+#             */
/*   Updated: 2021/10/08 13:29:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void upper_str(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		std::cout << (char)std::toupper(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			upper_str(argv[i]);
			if (i < argc)
				std::cout << " ";
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
