#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade to high");
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade too low");
			}
	};

	public:

		Form( std::string name, int signGrade, int execGrade ) throw(Form::GradeTooLowException, Form::GradeTooHighException);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string	const &	getName( void ) const throw();
		int 			getSignGrade( void ) const throw();
		int 			getExecGrade( void ) const throw();
		bool 			getIsSigned( void ) const throw();

		bool				beSigned( Bureaucrat const *b ) throw(Form::GradeTooLowException);


	private:

		Form();

		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
		std::string	const	_name;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif
