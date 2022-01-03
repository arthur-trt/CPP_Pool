/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:29:25 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 16:40:12 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "Hello 👏 to ScavTrap(void)" << std::endl;
	this->_name = "";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Hello 👏 to ScavTrap(" << this->_name << ")" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & other ) : ClapTrap(other)
{
	std::cout << "Hello 👏 to ScavTrap(other)" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( const ScavTrap & other)
{
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Bye bye ScavTrap " << this->_name << std::endl;
	return ;
}

void	ScavTrap::GuardGate( void )
{
	std::cout	<< "ScavTrap (" << this->_name
				<< ") is in Gate Keeper mode !" << std::endl;
}

void	ScavTrap::attacK( std::string const & target )
{
	std::cout << "ScavTrap::";
	this->ClapTrap::attacK(target);
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	std::cout << "ScavTrap::";
	this->ClapTrap::takeDamage(amount);	
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	std::cout << "ScavTrap::";
	this->ClapTrap::beRepaired(amount);
}	