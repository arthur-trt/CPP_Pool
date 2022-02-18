/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:50:56 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 15:50:59 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

# include <iostream>
# include <algorithm>
# include <vector>
# include <stdlib.h>
# include <sys/time.h>

int main()
{
	std::vector<int>	v;
	int value;

	srand(time(NULL));
	for (size_t i = 0; i < 10000; i++)
    {
		v.push_back(rand() % 10000);
    }
	value = rand() % 10000;
	std::cout << value << " : " ;
	try {
		easyfind(v, value);
		std::cout << "in the list" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
