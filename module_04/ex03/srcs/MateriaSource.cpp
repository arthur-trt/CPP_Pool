/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:12:17 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 13:37:59 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.Class.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < MAX_MATERIA; i++)
	{
		this->_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const & other )
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

MateriaSource	&MateriaSource::operator=( MateriaSource const & rhs )
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < MAX_MATERIA; i++)
		{
			if (this->_materia[i])
				delete this->_materia[i];
			if (rhs._materia[i])
				this->_materia[i] = rhs._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria( AMateria *materia )
{
	std::cout << "Learning" << std::endl;
	for (size_t i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const & type )
{
	for (size_t i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
