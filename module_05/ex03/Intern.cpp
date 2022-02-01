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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
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
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	AForm *forms[3] = {
		&ShrubberyCreationForm(target),
		&RobotomyRequestForm(target),
		&PresidentialPardonForm(target)
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (formsNames[i] == form)
		{
			AForm	*ptr = new ((AForm)forms[i]);
		}
	}
	return (NULL);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */