#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _signGrade(0), _execGrade(0), _name("")
{
	return ;
}

Form::Form( std::string name, int signGrade, int execGrade ) throw(Form::GradeTooLowException, Form::GradeTooHighException) : _signGrade(signGrade), _execGrade(execGrade), _name(name)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else
	{
		this->_isSigned = false;
	}
}

Form::Form( const Form & src ) : _signGrade(src._signGrade), _execGrade(src._execGrade), _name(src._name)
{
	this->_isSigned = src._isSigned;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_isSigned = rhs.getSignGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form <" << i.getName() << "> ";
	if (i.getIsSigned())
		o << "is signed ";
	else
		o << "is not signed ";
	o << "need grade <" << i.getSignGrade() << "> to be signed and grade <"
	<< i.getExecGrade() << "> to be executed";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
bool			Form::beSigned( Bureaucrat const *b ) throw(Form::GradeTooLowException)
{
	if (b->getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
	{
		this->_isSigned = true;
	}
	return (this->_isSigned);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const	&	Form::getName( void ) const throw()
{
	return(this->_name);
}

int				Form::getSignGrade( void ) const throw()
{
	return (this->_signGrade);
}

int				Form::getExecGrade( void ) const throw()
{
	return (this->_execGrade);
}

bool				Form::getIsSigned( void ) const throw()
{
	return (this->_isSigned);
}

/* ************************************************************************** */
