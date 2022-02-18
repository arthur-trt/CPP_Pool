/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:18:28 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/18 15:24:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <iomanip>
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void	basic_test(void)
{
	int		tmp;
	Span	test(50);

	srand(time(NULL));
	for (size_t i = 0; i < 50; i++)
	{
		tmp = rand();
		test.addMember(tmp);
	}
	std::cout << "Shortest : " << test.shortestSpan() << std::endl;
	std::cout << "Longest : " << test.longestSpan() << std::endl;
}

void	not_enough_test(void)
{
	Span	test(50);

	try
	{
		test.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test.addMember(42);
	try
	{
		test.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test.addMember(420);
	try
	{
		test.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

void	full_test(void)
{
	Span	test(3);

	try
	{
		test.addMember(1);
		test.addMember(2);
		test.addMember(3);
		test.addMember(4);
		test.addMember(5);
		test.addMember(6);
		test.addMember(7);
		test.addMember(8);
		test.addMember(9);
		test.addMember(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	big_rand_test(void)
{
	int		tmp;
	Span	test(10000);

	srand(time(NULL));
	for (size_t i = 0; i < 10000; i++)
	{
		tmp = rand();
		test.addMember(tmp);
	}
	std::cout << "Shortest : " << test.shortestSpan() << std::endl;
	std::cout << "Longest : " << test.longestSpan() << std::endl;
}

int	main(void)
{
	basic_test();
	not_enough_test();
	full_test();
	big_rand_test();

	return (0);
}
