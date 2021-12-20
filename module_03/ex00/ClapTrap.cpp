/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:45:06 by arthur            #+#    #+#             */
/*   Updated: 2021/12/19 12:03:25 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void )
{
	std::cout << "Hello 👏 to ClapTrap(void)" << std::endl;
	this->_name = "";
	this->_hit_pts = 0;
	this->_energy_pts = 10;
	this->_attack_damage = 10;
	return;
}

ClapTrap::ClapTrap( std::string name ): _name(name)
{
	std::cout << "Hello 👏 to ClapTrap(" << this->_name << ")" << std::endl;
	this->_hit_pts = 0;
	this->_energy_pts = 10;
	this->_attack_damage = 10;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & other )
{
	std::cout << "Hello 👏 to ClapTrap(other)" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap( void )
{
	return ;
}

ClapTrap &ClapTrap::operator=( const ClapTrap & other )
{
	std::cout << "Hello 👏 to operator=(other)" << std::endl;
	this->_name = other._name;
	this->_hit_pts = other._hit_pts;
	this->_energy_pts = other._energy_pts;
	this->_attack_damage = other._energy_pts;
}

void    ClapTrap::attacK( std::string const & target )
{
	std::cout   << "ClapTrap " << this->_name 
				<< " attack " << target
				<< ", causing" << this->_hit_pts
				<< " point of damage" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
	
}