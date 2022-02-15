/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:16:36 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:28:36 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base	*generate(void)
{
	int		random;
	Base	*instance = NULL;

	srand(time(NULL));
	random = rand() % 3;
	std::cout << random << std::endl;
	if (random == 1)
	{
		instance = new A;
		std::cout << "Generate A instance" << std::endl;
	}
	else if (random == 2)
	{
		instance = new B;
		std::cout << "Generate B instance" << std::endl;
	}
	else if (random == 3)
	{
		instance = new C;
		std::cout << "Generate C instance" << std::endl;
	}
	return (instance);
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "It is an instance of class A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "It is an instance of class B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "It is an instance of class C" << std::endl;
	else
		std::cout << "WTF have you done ?" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "It is an instance of class A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "It is an instance of class B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "It is an instance of class C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "WTF have you done ?" << std::endl;
			}

		}

	}

}
