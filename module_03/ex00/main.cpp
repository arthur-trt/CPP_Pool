/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:35:19 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 12:20:19 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
    ClapTrap    clap("Clappy");
    ClapTrap    bad("AnnoyingOne");
    
    clap.attacK("AnnoyingOne");
    clap.attacK("AnnoyingOne");
    clap.takeDamage(15);
    clap.beRepaired(50);

    return (0);
}