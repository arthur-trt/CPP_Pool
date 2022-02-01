#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	class UnknowFormException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("The form is unknow");
			}
	};

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm	*makeForm( std::string const & form, std::string const & target ) const throw(Intern::UnknowFormException);

	private:


};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif
