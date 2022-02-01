/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:10:26 by arthur            #+#    #+#             */
/*   Updated: 2022/02/01 13:46:37 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm()
{
	this->_target = "none";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm::AForm(target + "_shrubbery", 145, 137)
{
	this->_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm::AForm(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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
bool	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException)
{
	if (this->canExecute(executor))
	{
		std::ofstream	file(this->getName().c_str(), std::ofstream::out);
		if (file.is_open())
		{
			file	<< "                                                    .     " << std::endl
					<< "                                         .         ;      " << std::endl
					<< "            .              .              ;%     ;;       " << std::endl
					<< "              ,           ,                :;%  %;        " << std::endl
					<< "               :         ;                   :;%;'     ., " << std::endl
					<< "      ,.        %;     %;            ;        %;'    ,;   " << std::endl
					<< "        ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl
					<< "         %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl
					<< "          ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl
					<< "           `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl
					<< "            `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl
					<< "               `:%;.  :;bd%;          %;@%;'              " << std::endl
					<< "                 `@%:.  :;%.         ;@@%;'               " << std::endl
					<< "                   `@%.  `;@%.      ;@@%;                 " << std::endl
					<< "                     `@%%. `@%%    ;@@%;                  " << std::endl
					<< "                       ;@%. :@%%  %@@%;                   " << std::endl
					<< "                         %@bd%%%bd%%:;                    " << std::endl
					<< "                           #@%%%%%:;;                     " << std::endl
					<< "                           %@@%%%::;                      " << std::endl
					<< "                           %@@@%(o);  . '                 " << std::endl
					<< "                           %@@@o%;:(.,'                   " << std::endl
					<< "                       `.. %@@@o%::;                      " << std::endl
					<< "                          `)@@@o%::;                      " << std::endl
					<< "                           %@@(o)::;                      " << std::endl
					<< "                          .%@@@@%::;                      " << std::endl
					<< "                          ;%@@@@%::;.                     " << std::endl
					<< "                         ;%@@@@%%:;;;.                    " << std::endl
					<< "                     ...;%@@@@@%%:;;;;,..                 " << std::endl;
			file.close();
			std::cout << "Shrubbery " << this->getName().c_str() << " created" << std::endl;
			return (true);
		}
	}
	return (false);
}

AForm	*ShrubberyCreationForm::create( std::string const & target )
{
	return (new ShrubberyCreationForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
