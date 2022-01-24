/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:51:14 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 12:11:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.Class.hpp"
# include "AMateria.Class.hpp"
# define	MAX_MATERIA	4

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[MAX_MATERIA];
	public:
		MateriaSource();
		MateriaSource( MateriaSource const & other );
		~MateriaSource();

		MateriaSource	&operator=( MateriaSource const & rhs );

		void			learnMateria( AMateria *materia );
		AMateria		*createMateria( std::string const & type );
};

#endif
