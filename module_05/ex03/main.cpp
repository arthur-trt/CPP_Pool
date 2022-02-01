/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:27:29 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/01 13:48:53 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main(void)
{
	AForm		*f1;
	AForm		*f2;
	AForm		*f3;
	AForm		*f4;
	AForm		*f5;


	Bureaucrat	b1("King", 2);
	Bureaucrat	b2("Noble", 35);
	Bureaucrat	b3("Bourgeois", 78);
	Bureaucrat	b4("Paysans", 149);

	Intern		whocares;

	std::cout << whocares << std::endl;

	f1 = whocares.makeForm("presidential pardon", "marvin");
	f2 = whocares.makeForm("robotomy request", "zaphod");
	f3 = whocares.makeForm("shrubbery creation", "slartibartfast");
	f4 = whocares.makeForm("robotomy request", "never_signed");

	try
	{
		f5 = whocares.makeForm("super", "super");
	}
	catch(const std::exception& e)
	{
		std::cerr << "Stupid intern can't create a form because " << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "Bureaucrats :" << std::endl;
	std::cout	<< "\t" << b1 << std::endl
				<< "\t" << b2 << std::endl
				<< "\t" << b3 << std::endl
				<< "\t" << b4 << std::endl << std::endl;

	std::cout << "Forms :" << std::endl;
	std::cout	<< "\t" << *f1 << std::endl
				<< "\t" << *f2 << std::endl
				<< "\t" << *f3 << std::endl
				<< "\t" << *f4 << std::endl << std::endl;

 	try
	{
		f1->beSigned(&b4);
	}
	catch(const std::exception& e)
	{
		std::cerr << b4.getName() << " can't sign because : " << e.what() << '\n';
	}
	f1->beSigned(&b1);
	f2->beSigned(&b1);
	f3->beSigned(&b1);

	std::cout << std::endl << "Forms :" << std::endl;
	std::cout	<< "\t" << *f1 << std::endl
				<< "\t" << *f2 << std::endl
				<< "\t" << *f3 << std::endl
				<< "\t" << *f4 << std::endl << std::endl;

	b4.executeForm(*f1);
	b4.executeForm(*f2);
	b4.executeForm(*f3);
	b4.executeForm(*f4);

	std::cout << std::endl;

	b1.executeForm(*f1);
	b2.executeForm(*f2);
	b3.executeForm(*f3);

	return (0);
}
