/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:23:47 by arthur            #+#    #+#             */
/*   Updated: 2022/01/10 08:45:13 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog( void ) : Animal("Dog")
{
	this->brain = new Brain();
	return ;
}

Dog::Dog( Dog const & other ) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	return ;
}

Dog::~Dog( void )
{
	delete brain;
	return ;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wahouf wahouf !" << std::endl;
	return ;
}

Brain	*Dog::getBrain( void ) const
{
	return this->brain;
}
