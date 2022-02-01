#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _signGrade(0), _execGrade(0), _name("")
{
	return ;
}

AForm::AForm( std::string name, int signGrade, int execGrade ) throw(AForm::GradeTooLowException, AForm::GradeTooHighException) : _signGrade(signGrade), _execGrade(execGrade), _name(name)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	else
	{
		this->_isSigned = false;
	}
}

AForm::AForm( const AForm & src ) : _signGrade(src._signGrade), _execGrade(src._execGrade), _name(src._name)
{
	this->_isSigned = src._isSigned;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_isSigned = rhs.getSignGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "AForm <" << i.getName() << "> ";
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
bool			AForm::beSigned( Bureaucrat const *b ) throw(AForm::GradeTooLowException)
{
	if (b->getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	else
	{
		this->_isSigned = true;
	}
	return (this->_isSigned);
}

bool			AForm::canExecute( Bureaucrat const & executor ) const throw(AForm::GradeTooLowException, AForm::FormNotSignedException)
{
	if (this->_isSigned == false)
	{
		throw AForm::FormNotSignedException();
		return (false);
	}
	else if (executor.getGrade() > this->_execGrade)
	{
		throw AForm::GradeTooLowException();
		return (false);
	}
	else
		return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const	&	AForm::getName( void ) const throw()
{
	return(this->_name);
}

int				AForm::getSignGrade( void ) const throw()
{
	return (this->_signGrade);
}

int				AForm::getExecGrade( void ) const throw()
{
	return (this->_execGrade);
}

bool				AForm::getIsSigned( void ) const throw()
{
	return (this->_isSigned);
}

/* ************************************************************************** */
