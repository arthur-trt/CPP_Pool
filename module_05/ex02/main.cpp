/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:27:29 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/28 20:49:46 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat	tmp("Super", 137);
	RobotomyRequestForm	f("test");

	std::cout << tmp << std::endl;
	std::cout << f << std::endl;

	try
	{
		f.beSigned(&tmp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << f << std::endl;

	tmp.executeForm(f);

	return (0);
}
