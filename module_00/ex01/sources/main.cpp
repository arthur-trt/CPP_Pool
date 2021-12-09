/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:33:35 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/09 12:35:00 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.Class.hpp"
# include "phonebook.hpp"
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

void	add_cmd (Phonebook &phonebook)
{
	phonebook.add_contact();
}

void	search_cmd(Phonebook phonebook)
{
	int			index;
	std::string	tmp;
	
	phonebook.print_index();
	std::cout << "Enter the index contact you want to access. Enter \"BACK\" if you want to return to the main menu." << std::endl;
	do
	{
		do
		{
			std::cout << ">> ";
			getline(std::cin, tmp, '\n');
			if (std::cin.eof() == 1)
				return ;
			if (tmp.compare("BACK") == 0)
				return;
		} while ((index = to_int(tmp.c_str()) - 1) == -1);
	} while (phonebook.print_contact(index) == false);
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	print_hello();
	std::cout << "Possible command are : ADD / SEARCH / EXIT" << std::endl;
	do
	{
		std::cout << "> " << std::ends;
		getline(std::cin, input, '\n');
		if (std::cin.eof() == 1)
				return (0);
		if (input.compare("ADD") == 0)
			add_cmd(phonebook);
		else if (input.compare("SEARCH") == 0)
			search_cmd(phonebook);
	} while(input.compare("EXIT") != 0);
	return (0);
}
