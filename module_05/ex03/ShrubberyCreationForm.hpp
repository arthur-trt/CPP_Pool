/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:10:28 by arthur            #+#    #+#             */
/*   Updated: 2022/01/28 12:09:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual bool	execute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException);

	private:
		ShrubberyCreationForm();

		std::string	_target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
