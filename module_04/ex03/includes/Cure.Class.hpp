/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:02:16 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 11:37:20 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.Class.hpp"

class AMateria;

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure ( Cure const & other );
		Cure & operator=( Cure const & rhs );
		~Cure();

		AMateria*	clone( void ) const;
		void		use( ICharacter & target );
};

#endif
