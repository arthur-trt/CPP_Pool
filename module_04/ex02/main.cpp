/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:15:32 by arthur            #+#    #+#             */
/*   Updated: 2022/01/14 12:05:28 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>
#include <iomanip>

static void	usage(void)
{
	std::cerr << "Usage : ./animals <numbers of animals>" << std::endl;
	std::cerr << "Numbers of animals must be at least 2" << std::endl;
}

int	main(int argc, char **argv)
{
	size_t	nb_ani;

	if (argc != 2)
	{
		usage();
		return (1);
	}
	nb_ani = atoi(argv[1]);
	if (nb_ani < 2)
	{
		usage();
		return (1);
	}
	Animal	*animals[nb_ani];
	for (size_t i = 0; i < nb_ani; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << "DEEP COPY :" << std::endl;
	Cat	copy(* (Cat *)animals[0]);
	for (size_t i = 0; i < NB_IDEAS; i++)
	{
		std::cout << "Original : " << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Copy     : " << copy.getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "END COPY" << std::endl;
	for (size_t i = 0; i < nb_ani; i++)
	{
		delete animals[i];
	}
	// Can't create an Animal instance. Uncomment for test
	//Animal test;
	return (0);
}
