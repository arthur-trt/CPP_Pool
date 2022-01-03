/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:13:20 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 18:15:24 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat( void ) : Animal("Cat")
{
	return ;
}

Cat::Cat( Cat const & other ) : Animal(other)
{
	return ;
}

Cat::~Cat( void )
{
	return ;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow, meow !!" << std::endl;
	return ;
}