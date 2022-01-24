/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:58:17 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 10:39:33 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.Class.hpp"

/*
**	CONSTRUCTORS
*/
Character::Character( void )
{
	return ;
}

Character::Character( std::string name ) : _name(name)
{
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		_inventory[i] = NULL;
	}
	return ;
}

Character::Character( Character const & other )
{
	*this = other;
}

/*
**	DESTRUCTORS
*/
Character::~Character( void )
{
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		delete this->_inventory[i];
	}
}


/*
**	OPERATORS
*/
Character	&Character::operator=( Character const & rhs )
{
	this->_name = rhs.getName();
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

/*
**	GETTERS
*/
std::string const &	Character::getName( void ) const
{
	return (this->_name);
}

/*
**	SPECIALS
*/
void	Character::equip( AMateria * m )
{
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	return ;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
		return ;
	this->_inventory[idx]->use(target);
}
