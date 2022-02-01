#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	o << "Why do you want to print an intern? No one cares";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
AForm	*Intern::makeForm( std::string const & form, std::string const & target ) const throw (Intern::UnknowFormException)
{
	const std::string	formsNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};

	AForm *(*forms[3])( std::string const & target ) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (formsNames[i] == form)
		{
			return forms[i](target);
		}
	}
	throw Intern::UnknowFormException();
	return (NULL);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
