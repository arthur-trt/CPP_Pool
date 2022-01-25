/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:27:29 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/25 14:53:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	tmp("Super", 5);
	Bureaucrat	tmp2(tmp);
	Form		f("form1", 12, 35);
	Form		f2("form2", 1, 2);

	std::cout << tmp << std::endl;
	std::cout << tmp2 << std::endl;
	std::cout << f << std::endl;
	std::cout << f2 << std::endl;
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
	tmp.signForm(&f);
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
	tmp2.signForm(&f2);

	std::cout << tmp << std::endl;
	std::cout << tmp2 << std::endl;
	std::cout << f << std::endl;
	std::cout << f2 << std::endl;
	return (0);
}
