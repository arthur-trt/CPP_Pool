/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:46:58 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 10:46:16 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.Class.hpp"

class AMateria;

class	Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice( Ice const & other );
		Ice & operator=( Ice const & rhs );
		~Ice();

		AMateria*	clone( void ) const;
		void		use( ICharacter & target );
};

#endif
