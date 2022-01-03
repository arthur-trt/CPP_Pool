/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:34:48 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 16:41:32 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main (void)
{
    ClapTrap    clapy("Clapy");
    FragTrap    fragy("Fragy");
    ScavTrap    scavy("Scavy");

    clapy.takeDamage(10);
    scavy.takeDamage(10);
    fragy.takeDamage(3);
    clapy.beRepaired(20);
    scavy.beRepaired(20);
    fragy.beRepaired(7);
    scavy.GuardGate();
    fragy.highFivesGuys();
    return (0);
}