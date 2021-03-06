/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:27:29 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/25 11:19:16 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	tmp("Super", 5);
	Bureaucrat	tmp2(tmp);

	try
	{
		//Bureaucrat	tooHigh("Never Append", 0);
		Bureaucrat	tooLow("Never Append Bis", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		tmp.incGrade(2);
		tmp.incGrade(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << tmp << std::endl;
	try
	{
		tmp2.decGrade(140);
		tmp2.decGrade(7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << tmp2 << std::endl;
	return (0);
}
