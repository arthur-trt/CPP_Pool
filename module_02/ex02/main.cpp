/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:34:13 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/20 10:19:07 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(-25.5f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c * b << std::endl;

	return 0;
}
