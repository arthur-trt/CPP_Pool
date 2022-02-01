/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:39:22 by arthur            #+#    #+#             */
/*   Updated: 2022/02/01 12:05:42 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm::AForm(target + "_presidential_pardon", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm()
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm::AForm(src)
{
	this->_target = src._target;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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
bool	PresidentialPardonForm::execute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException)
{
	if (this->canExecute(executor))
	{
		std::cout << this->_target + " has been pardoned by his sumptuous majesty Zafod Beeblebrox" << std::endl;
		return (true);
	}
	return (false);
}

AForm	*PresidentialPardonForm::create( std::string const & target )
{
	return (new PresidentialPardonForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
