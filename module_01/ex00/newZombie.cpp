/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:21:17 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/13 13:36:00 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie*	newZombie(std::string name)
{
	Zombie* zombie = new Zombie;
	zombie->setName(name);
	zombie->announce();
	return (zombie);
}
