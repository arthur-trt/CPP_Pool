/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:33:35 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/02 15:48:39 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.Class.hpp"
# include "Phonebook.Class.hpp"
# include <string>
# include <iostream>


void	print_hello(void)
{
	std::cout << "########  ##     ##  #######  ##    ## ######## ########   #######   #######  ##    ##" << std::endl;
	std::cout << "##     ## ##     ## ##     ## ###   ## ##       ##     ## ##     ## ##     ## ##   ##" << std::endl;
	std::cout << "##     ## ##     ## ##     ## ####  ## ##       ##     ## ##     ## ##     ## ##  ##" << std::endl;
	std::cout << "########  ######### ##     ## ## ## ## ######   ########  ##     ## ##     ## #####" << std::endl;
	std::cout << "##        ##     ## ##     ## ##  #### ##       ##     ## ##     ## ##     ## ##  ##" << std::endl;
	std::cout << "##        ##     ## ##     ## ##   ### ##       ##     ## ##     ## ##     ## ##   ##" << std::endl;
	std::cout << "##        ##     ##  #######  ##    ## ######## ########   #######   #######  ##    ##" << std::endl;
	std::cout << std::endl << std::endl;
}

int	main(void)
{
	Contact instance;

	instance.setFields();
	return (0);
}
