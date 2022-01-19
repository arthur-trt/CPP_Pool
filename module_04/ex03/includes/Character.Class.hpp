/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:24:32 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/19 12:14:54 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.Class.hpp"
# include "AMateria.Class.hpp"

# define	INVENTORY_SIZE	4

class	Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[INVENTORY_SIZE];

		Character();

	public:
		Character( std::string name );
		Character( Character const & other );
		~Character( void );

		Character	&operator=( Character const & rhs );

		std::string const & getName( void ) const;

		void		equip( AMateria * m );
		void		unequip( int idx );
		void		use( int idx, ICharacter & target );
};

#endif
