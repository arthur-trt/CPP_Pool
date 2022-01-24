/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:13:16 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 14:43:42 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}

Bureaucrat::Bureaucrat( std::string name, int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowExcepetion)
{
	this->_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExcepetion();
	else
		this->_grade = grade;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrate grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Bureaucrat::incGrade( int inc ) throw(Bureaucrat::GradeTooHighException)
{
	if ((this->_grade - inc) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= inc;
}

void	Bureaucrat::incGrade( void ) throw(Bureaucrat::GradeTooHighException)
{
	Bureaucrat::incGrade(1);
}

void	Bureaucrat::decGrade( int dec ) throw(Bureaucrat::GradeTooLowExcepetion)
{
	if ((this->_grade + dec) > 150)
		throw Bureaucrat::GradeTooLowExcepetion();
	else
		this->_grade += dec;
}

void	Bureaucrat::decGrade( void ) throw(Bureaucrat::GradeTooLowExcepetion)
{
	Bureaucrat::decGrade(1);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	Bureaucrat::getName( void ) const throw()
{
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const throw()
{
	return (this->_grade);
}

/* ************************************************************************** */
