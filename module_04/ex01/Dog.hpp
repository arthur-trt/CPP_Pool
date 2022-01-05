/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:22:08 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 18:23:28 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>

class Dog : public Animal
{
private:

public:
	Dog( void );
	Dog( Dog const & other);
	virtual ~Dog( void );

	void	makeSound( void ) const;
};

#endif