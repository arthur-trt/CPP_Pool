/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:33:35 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/01 17:40:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.Class.hpp"
# include <string>
# include <iostream>

int	main(void)
{
	Contact	contact;

	contact.setFirstName("Arthur");
	contact.setLastName("");
	std::cout << "First name : " << contact.getFirstName() << std::endl;
	std::cout << "Last name : " << contact.getLastName() << std::endl;
	return (0);
}
