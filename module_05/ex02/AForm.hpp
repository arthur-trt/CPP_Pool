#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:

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

		class	FormNotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Non signed form can't be executed");
				}
		};

		AForm( std::string name, int signGrade, int execGrade ) throw(AForm::GradeTooLowException, AForm::GradeTooHighException);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & rhs );

		std::string	const &	getName( void ) const throw();
		int 				getSignGrade( void ) const throw();
		int 				getExecGrade( void ) const throw();
		bool 				getIsSigned( void ) const throw();

		bool				beSigned( Bureaucrat const *b ) throw(AForm::GradeTooLowException);
		bool				canExecute( Bureaucrat const & executor) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException);
		virtual bool		execute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException) = 0;


	protected:

		AForm();

	private:

		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
		std::string	const	_name;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif
