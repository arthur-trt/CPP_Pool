/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:02:34 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 19:09:48 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <string>
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	return ;
}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal(other)
{
	return ;
}

WrongCat::~WrongCat( void )
{
	return ;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow, meow !!" << std::endl;
	return ;
}