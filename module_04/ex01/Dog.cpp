/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:23:47 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 18:25:38 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog( void ) : Animal("Dog")
{
	return ;
}

Dog::Dog( Dog const & other ) : Animal(other)
{
	return ;
}

Dog::~Dog( void )
{
	return ;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wahouf wahouf !" << std::endl;
	return ;
}