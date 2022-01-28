/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:10:37 by arthur            #+#    #+#             */
/*   Updated: 2022/01/28 12:27:17 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( std::string target) : AForm::AForm(target + "_robotomy", 72, 75)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm::AForm(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	RobotomyRequestForm::execute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException)
{
	if (this->canExecute(executor))
	{
		std::cout << "BRZZZZ BRZZZ BRZZZ" << std::endl;
		std::srand(std::time(NULL));
		if ((std::rand() % 2 + 1) == 1)
			std::cout << "Robotomy failed. We must try again !" << std::endl;
		else
			std::cout << "It work ! He is under our control !" << std::endl;
		return (true);
	}
	return (false);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */