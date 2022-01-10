/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:13:20 by arthur            #+#    #+#             */
/*   Updated: 2022/01/10 08:51:33 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat( void ) : Animal("Cat")
{
	this->brain = new Brain();
	return ;
}

Cat::Cat( Cat const & other ) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	return ;
}

Cat::~Cat( void )
{
	delete brain;
	return ;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow, meow !!" << std::endl;
	return ;
}

Brain	*Cat::getBrain( void ) const
{
	return this->brain;
}
