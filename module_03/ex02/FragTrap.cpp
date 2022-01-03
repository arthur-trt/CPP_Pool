/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:29:25 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 16:40:53 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "Hello 👏 to FragTrap(void)" << std::endl;
	this->_name = "";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Hello 👏 to FragTrap(" << this->_name << ")" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
}

FragTrap::FragTrap( const FragTrap & other ) : ClapTrap(other)
{
	std::cout << "Hello 👏 to FragTrap(other)" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=( const FragTrap & other)
{
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "Bye bye FragTrap " << this->_name << std::endl;
	return ;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout	<< "FragTrap (" << this->_name
				<< ") make a highfive to everyone !" << std::endl;
}

void	FragTrap::attacK( std::string const & target )
{
	std::cout << "FragTrap::";
	this->ClapTrap::attacK(target);
}

void	FragTrap::takeDamage( unsigned int amount )
{
	std::cout << "FragTrap::";
	this->ClapTrap::takeDamage(amount);	
}

void	FragTrap::beRepaired( unsigned int amount )
{
	std::cout << "FragTrap::";
	this->ClapTrap::beRepaired(amount);
}	