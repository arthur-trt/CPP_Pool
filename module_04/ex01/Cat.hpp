/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:59 by arthur            #+#    #+#             */
/*   Updated: 2022/01/10 08:51:31 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat( void );
	Cat( Cat const & other );
	virtual ~Cat( void );

	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
};

#endif
