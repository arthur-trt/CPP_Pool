/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:38:10 by arthur            #+#    #+#             */
/*   Updated: 2022/01/28 20:40:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		virtual bool	execute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException);

	private:

		PresidentialPardonForm();

		std::string	_target;
};
#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */