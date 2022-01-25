/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:13:14 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/25 12:05:34 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:
		Bureaucrat( std::string name, int grade ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowExcepetion);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void				incGrade( int inc ) throw(Bureaucrat::GradeTooHighException);
		void				incGrade( void ) throw(Bureaucrat::GradeTooHighException);
		void				decGrade( int dec ) throw(Bureaucrat::GradeTooLowExcepetion);
		void				decGrade( void ) throw(Bureaucrat::GradeTooLowExcepetion);

		std::string			getName( void ) const throw();
		int					getGrade( void ) const throw();

	private:
		Bureaucrat();
		const std::string	_name;
		int					_grade;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grad too high (max is 1)");
			}
	};
	class GradeTooLowExcepetion : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade too low (min is 150)");
			}
	};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif
