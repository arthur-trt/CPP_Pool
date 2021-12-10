/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:58:37 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/10 16:12:13 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name)
{
	Zombie::announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
