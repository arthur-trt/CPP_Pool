/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:18:28 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/22 09:57:39 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <iomanip>
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

void	basic_test(void)
{
	int		tmp;
	Span	test(50);

	srand(time(NULL));
	for (size_t i = 0; i < 50; i++)
	{
		tmp = rand();
		test.addNumber(tmp);
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
	test.addNumber(42);
	try
	{
		test.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test.addNumber(420);
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
		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test.addNumber(5);
		test.addNumber(6);
		test.addNumber(7);
		test.addNumber(8);
		test.addNumber(9);
		test.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	testBig(void) {

	Span sp = Span(10000);
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite;
	std::vector<int> vec(10001, 42);
	try{
		sp.addNumber(10);
		sp.addNumber(vec.begin(), vec.end());
	} catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << "Shortest span = " <<  sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	Span sp2 = Span(10000);
	try{
		sp2.addNumber(10);
		sp2.addNumber(53, 900);
		sp2.addNumber(48,10000);
	} catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << "Shortest span = " <<  sp2.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << PINK << "__________SUBJECT_________ " << END << std::endl;
	basic_test();
	std::cout << std::endl;

	std::cout << PINK << "________NOT ENOUGH________ " << END << std::endl;
	not_enough_test();
	std::cout << std::endl;

	std::cout << PINK << "_______STORAGE FULL_______ " << END << std::endl;
	full_test();
	std::cout << std::endl;

	std::cout << PINK << "__________BIG_________ " << END << std::endl;
	testBig();
	std::cout << std::endl;

	return (0);
}

