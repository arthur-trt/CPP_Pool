/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:34:48 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 17:22:28 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main (void)
{
	ClapTrap    clapy("Clapy");
	FragTrap    fragy("Fragy");
	ScavTrap    scavy("Scavy");
	DiamondTrap diamondy("Diamondy");

	clapy.takeDamage(10);
	scavy.takeDamage(10);
	fragy.takeDamage(3);
	diamondy.FragTrap::takeDamage(19);
	clapy.beRepaired(20);
	scavy.beRepaired(20);
	fragy.beRepaired(7);
	diamondy.ScavTrap::beRepaired(18);
	scavy.GuardGate();
	fragy.highFivesGuys();
	diamondy.whoAmI();
	return (0);
}