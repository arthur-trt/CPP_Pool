/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:45:35 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 17:21:45 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"
# include <string>
# include <iomanip>
# include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "Hello 👏 to DiamondTrap(void)" << std::endl;
	this->DiamondTrap::_name = "default";
	this->FragTrap::_hit_pts = 100;
	this->ScavTrap::_energy_pts = 50;
	this->FragTrap::_attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Hello 👏 to DiamondTrap(" << name << ")" << std::endl;
	this->DiamondTrap::_name = name;
	this->FragTrap::_hit_pts = 100;
	this->ScavTrap::_energy_pts = 50;
	this->FragTrap::_attack_damage = 30;
}

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attacK(target);
}

void DiamondTrap::whoAmI()
{
	std::cout   << "My DiamondTrap name is " << this->_name
                << " but my ClapTrap name is " << this->ClapTrap::getName()
                << " this is werid" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Bye bye DiamondTrap " << this->_name << std::endl;
    return ;
}
