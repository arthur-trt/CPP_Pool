/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:34:48 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 15:59:25 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main (void)
{
    ClapTrap    clapy("Clapy");
    ScavTrap    scavy("Scavy");

    clapy.takeDamage(10);
    scavy.takeDamage(10);
    clapy.beRepaired(20);
    scavy.beRepaired(20);
    scavy.GuardGate();
    return (0);
}