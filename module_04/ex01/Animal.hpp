/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:47:40 by arthur            #+#    #+#             */
/*   Updated: 2022/01/05 16:53:21 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string			type;
public:
	Animal( void );
	Animal( std::string type );
	Animal( const Animal & other );
	virtual ~Animal( void );

	Animal  &operator=( const Animal & other );

	virtual void		makeSound( void ) const;
	std::string const	&getType( void ) const;
};

#endif
