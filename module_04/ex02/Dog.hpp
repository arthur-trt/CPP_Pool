/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:22:08 by arthur            #+#    #+#             */
/*   Updated: 2022/01/10 08:44:37 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog( void );
	Dog( Dog const & other);
	virtual ~Dog( void );

	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
};

#endif
