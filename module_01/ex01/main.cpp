/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:38:13 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/13 13:53:31 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <sstream>

Zombie*	ZombieHorde( int N, std::string name );

int	main(int argc, char *argv[])
{
	Zombie*	zombies;
	std::string	tmp;
	int	N;

	if (argc == 3)
	{
		std::stringstream ss(argv[1]);
		ss >> N;
		tmp = argv[2];
	}
	else
	{
		std::cout << "Zombie N : ";
		getline(std::cin, tmp);
		std::stringstream ss(tmp);
		ss >> N;
		std::cout << "Zombie Name : ";
		getline(std::cin, tmp);
	}
	zombies = ZombieHorde(N, tmp);
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
