/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:11:00 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 12:13:22 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <string>
# include <iostream>
# include "ICharacter.Class.hpp"

class	ICharacter;

class	AMateria
{
	private:
		AMateria();

	protected:
		std::string	_type;

	public:
		AMateria( std::string const & type );
		AMateria( AMateria const & other );
		AMateria & operator=( AMateria const & rhs );
		virtual ~AMateria( void );

		std::string const &	getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter & target );
};

#endif
