/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:17:32 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 18:56:10 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"
# include <iostream>

static int	get_arg(std::string str)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (str == levels[i])
			return (i);
	}
	return (4);
}

int	main(int argc, char *argv[])
{
	Karen	karen;
	enum	level {
		DEBUG = 0,
		INFO = 1,
		WARNING = 2,
		ERROR = 3
	};

	if (argc != 2)
	{
		std::cerr << "Usage: ./Karen <LOGLEVEL>" << std::endl;
		return (1);
	}

	switch (get_arg(argv[1]))
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
			__attribute__((fallthrough));
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
			__attribute__((fallthrough));
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
			__attribute__((fallthrough));
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

	return (0);

}
